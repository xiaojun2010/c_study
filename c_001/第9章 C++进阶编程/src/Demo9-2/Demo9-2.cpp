//
// Created by rust on 2025/5/24.
//

#include <iostream>
#include <map>

using namespace std;

struct Display{
    void operator()(pair<string, double> info) const{
        cout<<info.first<<" "<<info.second<<endl;
    }
};


int main() {
    map<string, double> studdentScores;
    studdentScores["LiMing"] = 95.0;
    studdentScores["LiHong"] = 98.0;
    studdentScores["zhangsan"] = 95.6;

    studdentScores.insert(pair<string, double>("lisi", 99.0));
    studdentScores.insert(pair<string, double>("wangwu", 89.0));

    studdentScores.insert(map<string, double>::value_type("xiaojun",100.00));

    for_each(studdentScores.begin(),studdentScores.end(),Display());

    cout<<"1----------------------------"<<endl;

    map<string,double>::iterator iterator;
    iterator =  studdentScores.find("wangwu5");
    if (iterator != studdentScores.end()) {
        cout<<"find the score is : "<<iterator->second<< endl;
    }else {
        cout<<"Didn't find the key : "<<"wangwu5"<< endl;
    }

    cout<<"2----------------------------"<<endl;
    iterator = studdentScores.begin();
    while (iterator!= studdentScores.end()) {
        // if (abs(iterator->second - 95.0) <= 0.000000001) {
        //
        // }
        if (iterator->second < 95.0) {
            //删除
            studdentScores.erase(iterator++);
        }else {
            iterator++;
        }
    }
    for_each(studdentScores.begin(),studdentScores.end(),Display());
    cout<<"3----------------------------"<<endl;

    for (iterator = studdentScores.begin();iterator!= studdentScores.end();) {
        if (iterator -> second <= 98.5 + 1e-9) { // 使用 epsilon 避免浮点误差
            iterator = studdentScores.erase(iterator);
        }else {
            ++iterator;
        }
    }
    for_each(studdentScores.begin(),studdentScores.end(),Display());
    cout<<"4----------------------------"<<endl;

    // find 查询并删除元素
    iterator = studdentScores.find("lisi");
    if (iterator != studdentScores.end()) {
        cout<<"find the "<< iterator->first <<" , score is : "<<iterator->second<< endl;
    }else {
        cout<<"Didn't find the key : "<<"lisi"<< endl;
    }

    for_each(studdentScores.begin(),studdentScores.end(),Display());
    cout<<"5----------------------------"<<endl;

    studdentScores.erase(studdentScores.begin(),studdentScores.end());
    for_each(studdentScores.begin(),studdentScores.end(),Display());
    cout<<"6----------------------------"<<endl;

    return 0;
}
