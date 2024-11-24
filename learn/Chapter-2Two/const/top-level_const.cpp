//顶层const：本身是常量的指针
//底层const：所指对象是常量的指针
// Created by Jianyou on 2024/10/23.
#include <iostream>
using namespace std;
int main()
{
    /*
    int i = 1;
    int *const p1 =&i;          //顶层const，p1本身是常量，指向非常量i的常量指针；
    const int ci =42;           //顶层const，ci本身是常量，常量整形对象；
    const int *p2 = &ci;        //底层const,p2是指向常量ci的指针，本身不是常量，可以改变；
    const int *const p3 =p2;    //指向常量的常量指针，左边的是底层const，是指向常量的指针，右边的是顶层const，常量指针，
    const int &r = ci;          //所以引用常量都是底层常量；
    i = ci;                     //把ci的值赋给i；
    p2 = p3;                    //使p2指向p3；
    //int *p = p3;
    */
    int x = 1;
    const int *p = &x;


    const int y = 1;

    const int *p1 = &y;         //指向 常量 的指针

    p1 = &x;
    cout << *p1 << endl;

    int *const z = &x;          //

    const int *const p2 = &y;
    cout << p << endl;
    return 0;
}
