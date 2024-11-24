//
// Created by Jianyou on 24-10-18.
//
#include <iostream>
int main()
{
    using namespace std;
    int a = 1,b = 2;
    int *p1 = &a;
    cout << *p1 << endl;
    *p1 = 10;
    cout << a << endl;            //更改指针所指对象的值
    p1 = & b;
    cout << *p1 << endl;          //更改指针的值
    return 0;
}
/*另一种改变指针所指对象的值的方法；
 *a=10;
 *对，是直接修改。
 */