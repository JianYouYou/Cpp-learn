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
    vector<int> v1(10, 1);
    auto it = v1.begin();
    auto it1 = v1.end();
    vector<int>::difference_type distance = std::distance(it,it1);
    cout << distance << endl;

    vector<string> s1;
    cin << si <<endl;

    return 0;
}