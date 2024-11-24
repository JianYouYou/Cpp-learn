//*和&的用法
// Created by Jianyou on 2024/10/23.
#include <iostream>
using namespace std;
int main()
{
     int a = 10,b=8;
     int *p = &a;                  //定义初始化一个指针p；
     cout << *p << endl;           //输出*p是输出p指向的地址的值，*在指针里是解指针符，在引用里叫解引用符；
     cout << p << endl;            //输出p是输出p指向的地址
     p = &b;                       //让p指向b；
     cout << *p << endl;
     *p = 100;                     //修改地址的值，*取地址符，取p指向的地址并访问他的值；
     cout << *p << ' ' << b << endl;
     *p = a;                       //同理，把a的值赋给b，
     cout << *p << ' ' << b << endl;
     return 0;
}
