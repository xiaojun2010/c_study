#pragma once

class Observer;

#include <string>
#include <list>
using namespace std;

class Observerable {
public:
    Observerable();

    virtual ~Observerable();

    // 注册观察者
    //const 修饰函数，函数体内任何成员变量不能修改
    void Attach(Observer *pOb) ;

    // 反注册观察者
    void Detach(Observer *pOb);

    int GetObseverCount() const {
        return _Obs.size();
    }

    void DetachAll() {
        _Obs.clear();
    }

    virtual void GetSomeNews(string str) {
        SetChange(str);
    }

protected:
    void SetChange(string news); // 有变化，需要通知

private:
    //通知观察者
    void Notify(void *pArg);

private:
    bool _bChange;
    list<Observer *> _Obs;
};
