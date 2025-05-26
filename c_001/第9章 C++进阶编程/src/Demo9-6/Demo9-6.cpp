//
// Created by rust on 2025/5/25.
//

#include <list>
#include <iostream>

using namespace std;

int main() {
    list<int> v;
    v.push_back(3);
    v.push_back(4);

    v.push_front(2);
    v.push_front(1);
    //常量迭代器
    // list<int>::const_iterator it;

    //可修改迭代器
    list<int>::iterator it;
    for (it = v.begin(); it != v.end(); ++it) {
        *it += 1;
        cout << *it << " ";
    }
    cout << endl;

    cout << v.front() << endl;
    v.pop_front();//从顶部去除

    list<int>::reverse_iterator reverse_iterator;
    for (reverse_iterator = v.rbegin(); reverse_iterator != v.rend(); ++reverse_iterator) {
        *reverse_iterator += 1;
        cout << *reverse_iterator << " ";
    }

    return 0;
}
