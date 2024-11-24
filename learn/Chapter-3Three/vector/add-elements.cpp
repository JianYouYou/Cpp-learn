//
// Created by Jianyou on 2024/11/8.
//
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
int main()
{   //添加元素
    vector<int> i1;
    for(int i = 0; i<100; ++i)
    {
        i1.push_back(i);
        cout << i1[i] << endl;
    }
    //可以通过[]输出函数，但是不能用[]输出函数
    return 0;
}