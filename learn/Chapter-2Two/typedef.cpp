//给数据类型取别名
// Created by Jianyou on 24-10-24.
#include <iostream>
using namespace std;
int main()
{
 typedef double wages;      //后面是前面的类型别名；
 typedef wages base, *p;    //*p是指向wages的指针的类型别名，等同于double的指针的别名；
                            //typedef的语法，*p是指指向的wages的指针，p是指向的wages的指针的别名；、
 base d = 2.2;
 p p1 = &d;
 //GPT
 wages salary = 50000.0;    // 使用 'wages' 类型
 base hourlyRate = 20.0;    // 使用 'base' 类型（也是 'double'）
 p ptr = &salary;           // 使用 'p' 类型，'ptr' 是指向 'wages'（即 double）的指针

 typedef int *b;            //b是指向int的指针

 typedef char *pstring;     //pstring是char*的别名
 const pstring cstr = 0;    //=const char *cstr = 0，这么理解是错的
 const pstring *ps;         //ps是指针，指向char类型的常量（const）指针


    
 return 0;
}
/* 方便编辑，可以大批量更改变量的类型
 * typedef int  Dtype;
 * Dtype a=1;
 * Dtype b=2;
 * Dtype c=3;
 * 可以把int直接换成char，这样下面定义的变量的类型就变成了char型
 */