//
// Created by rust on 2025/5/25.
//

#include <algorithm>
#include <iostream>
using namespace std;

int MySort(int a, int b) {
    return a < b;
}

void Display(int a) {
    cout << a << " ";
}

template<class T>
    //传引用
    inline bool MySortT(T const &a, T const &b) {
    return a < b;
}

template<class T>
    inline void DisplayT(T const &a) {
    cout << a << " ";
}

struct SortF {
    inline bool operator()(int a, int b) {
        return a < b;
    }
};

struct DisplayF {
    inline bool operator()(int a) {
        cout << a << " ";
    }
};

//C++ 仿函数模板
template<class T>
struct SortFT {
    inline bool operator()(T const &a, T const &b) const {
        return a < b;
    }
};

template<class T>
struct DisplayFT {
    bool operator()(T const &a) {
        cout << a << " ";
    }
};


int main() {
    //C++ 方式
    int arr[] = {4, 3, 2, 1, 7};
    sort(arr, arr + 5, MySort);
    for_each(arr, arr + 5, Display);

    cout << endl;
    cout << "1----------------------------" << endl;

    //C++ 泛型
    int arr2[] = {4, 3, 2, 1, 7};
    sort(arr2, arr2 + 5, MySortT<int>);
    for_each(arr2, arr2 + 5, DisplayT<int>);

    cout << endl;
    cout << "2----------------------------" << endl;

    //C++ 仿函数
    int arr3[] = {4, 3, 2, 5, 7};
    sort(arr3, arr3 + 5, SortF());
    for_each(arr3, arr3 + 5, DisplayF());

    cout << endl;
    cout << "3----------------------------" << endl;

    //C++ 仿函数模板
    int arr4[] = {4, 3, 2, 5, 7};
    sort(arr3, arr3 + 5, SortFT<int>());
    for_each(arr3, arr3 + 5, DisplayFT<int>());

    return 0;
}
