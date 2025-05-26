//
// Created by rust on 2025/5/25.
//

#include <algorithm>
#include <functional>
#include <numeric>
#include <iostream>


using namespace std;


int main() {

    int ones[] = {1, 2, 3, 4, 5};
    int twos[] = {10, 20, 30, 40, 50};

    int results[5];

    //数组元素依次相加并返回
    transform(ones, ones + 5, twos, results, std::plus<int>());

    for_each(results, results + 5,
             // lambda 表达式（匿名函数）
             [](int a) -> void { cout << a << endl; }
    );

    cout << endl;
    //find
    int arr[] = {0, 1, 2, 3, 3, 4, 4, 5, 6, 6, 7, 7, 7, 8};

    int len = sizeof(arr) / sizeof(arr[0]);

    // vector<int> iA(arr + 2, arr + 6); //{2,3,3,4}
    vector<int> iA;
    iA.push_back(1);
    iA.push_back(9);//{1,9}

    //统计 = 7 的个数
    cout << count(arr, arr + sizeof(arr) / sizeof(arr[0]), 7) << endl;
    cout << endl;

    //统计 < 7 的个数
    cout << count_if(arr, arr + sizeof(arr) / sizeof(arr[0]), bind2nd(less<int>(), 7)) << endl;
    cout << endl;

    //统计 > 7 的个数
    cout << count_if(arr, arr + sizeof(arr) / sizeof(arr[0]), bind1st(less<int>(), 7)) << endl;
    cout << endl;

    //二分查找
    cout << binary_search(arr, arr + len, 8) << endl;
    cout << endl;

    cout << *search(arr,arr+len,iA.begin(),iA.end()) << endl ;
    return 0;
}
