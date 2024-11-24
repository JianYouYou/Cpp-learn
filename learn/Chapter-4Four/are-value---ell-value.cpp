/* 左值右值
 * 一个对象被用作左值是用的对象的身份，可寻址的对象
 * 被用作右值是用的对象的值(内容)
 */
#include<iostream>
using namespace std;
int main()
{
    int i = 1;        //i是左值，1是右值
    cout << i << endl;
    return 0;
}