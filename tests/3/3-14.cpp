//
// Created by Jianyou on 2024/11/8.
//
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
int main()
{
    cout << "please enter some integers:" << endl;
    int x = 0;
    vector<int> v1;
    while(cin >> x)
        v1.push_back(x);
    return 0;
}