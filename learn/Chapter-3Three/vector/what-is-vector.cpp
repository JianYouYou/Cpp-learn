//vector表示变量的集合，通常被称为容器
// Created by Jianyou on 2024/11/8.
//
#include<iostream>
#include<string>
#include<cctype>
#include<vector>        //需要命名头文件和using声明
using std::vector;
using namespace std;    //namespace std；包含了命名std::vector；
int main()
{
    //vector是类模板，模板不是类或变量，可以理解成是 编译器 生成 类 或 函数 时编写的一份说明；
    //实例化：编译器根据模板创建模板或者函数的过程。
    vector<int> i;
    vector<char> c;
    //vector容纳的是变量，不能包含引用；
    return 0;
}