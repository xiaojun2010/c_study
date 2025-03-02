// demo5-7.cpp : 定义控制台应用程序的入口点。
//

#include <string>

int a = 0;                                                //(GVAR)全局初始化区
int *p1;                                                   //(bss)全局未初始化区
int main()                                               //(text)代码区
{
    int b = 1;                                              //(stack)栈区变量
    char s[] = "abc";                                 //(stack)栈区变量
    int *p2 = NULL;                                     //(stack)栈区变量
    char *p3 = "123456";                         //123456\0在常量区, p3在(stack)栈区
    static int c = 0;                                    //(GVAR)全局(静态)初始化区
    p1 = new int(10);                               //(heap)堆区变量
    p2 = new int(20);                               //(heap)堆区变量
    char *p4 = new char[7];                     //(heap)堆区变量
    // strncpy(p4, 7, "123456");                  //(text)代码区

    //(text)代码区
    if (p1 != NULL) {
        delete p1;
        p1 = NULL;
    }
    if (p2 != NULL) {
        delete p2;
        p2 = NULL;
    }
    if (p4 != NULL) {
        delete[] p4;
        p4 = NULL;
    }
    //(text)代码区
    return 0;                                            //(text)代码区
}

