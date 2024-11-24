//const pointer:常量指针
//指向常量的指针，不能用指向常量的指针改变被指常量的值，换指针的所指对象能改变指针的值，指针本身不是常量能改，
//常量指针是本身是常量的指针，不能改变指针的值，就是不能通过改变指针的值来改变被指对象的值，
//常量要用指向常量的指针，但是指向常量的指针可以指向非常量对象
// Created by Jianyou on 2024/10/23.
#include <iostream>
using namespace std;
int main()
{
    const double pi = 3.14;
  //double *ptr = = &pi;           error 指向常量对象要用 指向常量的指针 ；
    const double *cptr  = &pi;   //right 用 指向常量的指针 指向常量对象；
  //*cptr = 42;                    error cptr是 指向常量的指针 ，不能直接赋值；
    cout << *cptr << endl;
    double dval = 4.13;
    cptr = &dval;                //让cptr指向dval；
    cout << *cptr << endl;
    int errNumb =0;
    int *const curErr = &errNumb;
    cout << *curErr << endl;
    const double pii = 3.14159;
    const double *const pip = &pii;
    cout << *pip << endl;

    int x = 1;
    const int y = 2;             //定义一个常量y；
    cout << y << endl;

    const int *z = &y;           //定义一个指向常量y的指针，
    cout << *z << endl;

    int n = 3;
    int *const p1 = &n;          //定义一个常量指针，指向非常量对象n，p1本身为常量，不能通过p1改变n的值，但是可以通过其他方式改变n的值
    cout << *p1 << endl;

    const int *const p2 = &y;    //定义一个常量指针，这个常量指针指向常量y；一个指向常量的常量指针；
    cout << *p2 << endl;

    const int *const p3 = &x;    //定义一个常量指针，指向非常量对象x；
    cout << *p3 << endl;
    z = p3;                      //使z指向p3
    cout << *z << endl;
    return 0;
}