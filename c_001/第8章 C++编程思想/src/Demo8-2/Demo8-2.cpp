// Demo8-2.cpp : 定义控制台应用程序的入口点。
//

// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//



#include <stdio.h>



// TODO:  在此处引用程序需要的其他头文件
#include "Observer.h"
#include "Observerable.h"

#include <iostream>
using namespace std;

class News : public Observerable
{
public:
    virtual void GetSomeNews(string str)
    {
        SetChange("News: " + str);
    }
};

class User1:public Observer
{
public:
    virtual void Update(void* pArg)
    {
        cout << "User1 Got News: " << reinterpret_cast<char*>(pArg) <<endl;
    }
};
class User2 :public Observer
{
public:
    virtual void Update(void* pArg)
    {
        cout << "User2 Got News: " << reinterpret_cast<char*>(pArg) <<endl;
    }
};

int main()
{
    User1 u1;
    User2 u2;

    News n1;
    n1.GetSomeNews("T0");
    cout << n1.GetObseverCount() << endl;  // 0

    n1.Attach(&u1);
    n1.Attach(&u2);
    n1.GetSomeNews("T1");
    cout << n1.GetObseverCount() << endl;  // 2

    n1.Detach(&u2);
    n1.GetSomeNews("T2");
    cout << n1.GetObseverCount() << endl;  // 1

    n1.DetachAll();
    n1.GetSomeNews("T3");
    cout << n1.GetObseverCount() << endl;  // 0

    return 0;
}

