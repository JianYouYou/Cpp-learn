//
// Created by Jianyou on 2024/11/9.
//
#include<iostream>
#include<string>
#include<cctype>
#include<vector>
using namespace std;
int main()
{
    unsigned buf_size = 1024;
    int ia[buf_size];           //合法
    int ia1[4 * 7 - 14];

    //假设txt_size是一个返回值为int类型的无参数函数
    //int ia2[txt_size()];        //不合法，数组维度必须为常量表达式；

    //char st[11] = "fundamental";  //不合法，fundamental是11个字符，但是用字符串字面量初始化会自动在结尾加一个空字符，st应该设置为st[12];
    return 0;
}