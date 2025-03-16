//
// Created by qqkk on 2025/3/15.
//
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int a;
    int index = 0;

    fstream fout;
    fout.open("/Users/qqkk/work/test/testBuffer1.txt",ios::app);
//    if (fout.fail())
    if (!fout)
    {
        cout << "open file open failed " << endl;
        return -1;
    }
    while (cin >> a) {
//        cout << "The number are: " << a << endl;
        fout << "The number are: " << a << endl;
        index++;
        if (index == 5) {
            break;
        }
    }

    // 清空缓存区脏数据
    cin.ignore(numeric_limits<std::streamsize>::max(), '\n');

    char ch;
    cin >> ch;
//    cout << "the last char is : " << ch << endl;
    fout << "the last char is : " << ch << endl;
    fout.close();
    return 0;
}