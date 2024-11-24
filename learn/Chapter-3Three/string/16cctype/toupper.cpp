/* 将小写字母改为大写字母
 * 要想改变string字符串中的字符的值，需要用引用类型
 */
// Created by Jianyou on 2024/11/7.
//
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{
    string s("hello world!");
    for (auto &c: s )
        c = toupper(c);
    cout << s << endl;
    return 0;
}