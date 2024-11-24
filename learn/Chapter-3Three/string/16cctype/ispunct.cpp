//
// Created by Jianyou on 2024/11/7.
//
#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    string s("hello world!!!");
    decltype(s.size()) punct_cut = 0;
    for (auto c : s)
    {
        if (ispunct(c))                  //ispunct:当c为标点符号时为真
            ++punct_cut;
    }
    cout << punct_cut
         << " punctuation characters in " << s << endl;
    return 0;
}