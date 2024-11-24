//对常量的引用
//引用常量要在引用前叫const
// Created by Jianyou on 2024/10/23.
#include <iostream>
using namespace std;
int main()
{
    const int ci = 1024;
    const int &r1 = ci;
    //r1 = 42;
    //int &r2 = ci;

}