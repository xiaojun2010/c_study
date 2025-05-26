//
// Created by rust on 2025/5/24.
//
// Demo9-1.cpp : 定义控制台应用程序的入口点。
//


#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <string>
#include <functional>
#include<algorithm>
#include <utility>
#include <iostream>
using namespace std;

//仿函数对象
struct Display
{
    // 运算符重载，重载括号运算符
    // 此重载允许Display类型的对象以函数调用的方式被使用，接受一个int类型的参数
    // 参数i: 要显示的整数值
    // 该函数没有返回值
    void operator()(int i)
    {
        cout << i << " ";
    }
};

struct Display2
{
    void operator()(pair<string, double> info)
    {
        cout << info.first << ":  " << info.second << "  ";
    }
};


//struct cmpMap
//{
//	bool operator()(pair<string, double> a, pair<string, double> b)
//	{
//		return a.first.length() < b.first.length();
//	}
//};

int main()
{
    int iArr[] = { 1, 2,3,4,5 };

    vector<int> iVector(iArr, iArr + 4);
    list<int> iList(iArr, iArr + 4);
    deque<int> iDeque(iArr, iArr + 4);
    queue<int> iQueue(iDeque);     // 队列 先进先出
    stack<int> iStack(iDeque);         // 栈 先进后出
    priority_queue<int> iPQueue(iArr, iArr + 4);  // 优先队列，按优先权

    for_each( iVector.begin(), iVector.end(), Display() );
    cout << endl;
    for_each(iList.begin(), iList.end(), Display());
    cout << endl;
    for_each(iDeque.begin(), iDeque.end(), Display());
    cout << endl;

    while ( !iQueue.empty() )
    {
        cout << iQueue.front() << " ";  // 1  2 3 4
        iQueue.pop();
    }
    cout << endl;

    while (!iStack.empty())
    {
        cout << iStack.top() << " ";    // 4 3  2  1
        iStack.pop();
    }
    cout << endl;

    while (!iPQueue.empty())
    {
        cout << iPQueue.top() << " "; // 4 3 2 1
        iPQueue.pop();
    }
    cout << endl;



    return 0;
}

