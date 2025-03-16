// demo6-6.cpp : 定义控制台应用程序的入口点。
//

 namespace quickzhao
 {
    int test(int  a){
        return a+1;
    }
 }

 int test(int a){
     return a;
}

int test(double a){
    return int (a);
}

int test(int a,double d){
    return a;
}

//?test@@YAHH@Z
//?test@@YAHN@Z
//?test@@YAHHN@Z
int main()
{
    int(*p)(int);
    p = test;
    int result = (*p)(1);

    result = quickzhao::test(1);

    result = test(2.0);
    result = test(1, 2.0);
    return 0;
}

