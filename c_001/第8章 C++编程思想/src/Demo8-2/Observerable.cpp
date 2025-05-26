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

#include "Observerable.h"


Observerable::Observerable(): _bChange(false) {
}


Observerable::~Observerable() {
}


// 注册观察者
void Observerable::Attach(Observer *pOb) {
    if (pOb == NULL) {
        return;
    }

    // 看看当前列表中是否有这个观察者
    auto it = _Obs.begin();
    for (; it != _Obs.end(); it++) {
        if (*it == pOb) {
            return;
        }
    }

    _Obs.push_back(pOb);
}

// 反注册观察者
void Observerable::Detach(Observer *pOb) {
    if ((pOb == NULL) || (_Obs.empty() == true)) {
        return;
    }

    _Obs.remove(pOb);
}

void Observerable::SetChange(string news) {
    _bChange = true;

    Notify(((void *) news.c_str()));
}


void Observerable::Notify(void *pArg) {
    if (_bChange == false) {
        return;
    }

    // 看看当前列表中是否有这个观察者
    auto it = _Obs.begin();
    for (; it != _Obs.end(); it++) {
        (*it)->Update(pArg);
    }

    _bChange = false;
}
