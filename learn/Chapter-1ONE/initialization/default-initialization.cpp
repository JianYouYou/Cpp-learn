//默认初始化 没有给变量设定初值的时候，变量被默认初始化
//定义在函数体之外的被设定为0，在函数体之内不被初始化
#include<iostream>
using namespace std;
int i1;                     //在函数体外，没有初始化i1，被默认初始化为0；全局变量 i1
int main()
{
    cout << i1 << endl;
    int i2;
    cout << i2 << endl;     //局部变量 i2：i2 没有被初始化，因此它的值是未定义的。你可能会看到它输出 0，这只是因为在那块内存中恰好存储了 0，但这并不是可靠的行为。
    return 0;
}
