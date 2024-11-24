//用整形数组初始化一个vector对象；
// Created by Jianyou on 2024/11/13.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i1[] = {1,2,3,4,5,6};
    vector<int> v1(begin(i1),end(i1));
    return 0;
}