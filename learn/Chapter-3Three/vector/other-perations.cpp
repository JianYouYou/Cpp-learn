//empty函数和size函数在vector中的用法和在string中完全一致
// Created by Jianyou on 2024/11/8.
//
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
int main()
{
    //用size的时候要注意表明类型
    vector<int>::size_type;
    //比较vector容器的大小时规则和string一样，先比较元素数量，在比较元素值;且只有能比较时才能比较
}