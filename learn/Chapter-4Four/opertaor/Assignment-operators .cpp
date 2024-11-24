/* 赋值运算符(=)
 * 左侧为非常量 满足右结合律
 * 左(右)结合律是指，在没有括号的情况下,表达式从左(右)侧开始计算
 * 区分赋值和初始化
 * 别混淆相等运算符(==)和赋值运算符(=)
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //允许用{}括起来的初始值赋值
    vector<int> v;
    v = {1,2,3,4};

    int i , i1;
    i = i1 = 2;     //满足右结合律，先将2赋给i1，然后将i1的值赋给i；
    return 0;
}
