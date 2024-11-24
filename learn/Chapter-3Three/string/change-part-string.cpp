/* 1 use [ ]
 * 2
 */
// Created by Jianyou on 2024/11/7.
#include<iostream>
#include<cctype>
#include<string>
using namespace std;
int main()
{

    //下标运算符[] 从0开始是第一个字符,字符类型为string::size_type
    //首先检查变量是否为空
    string s("hello world!!");

    if (!s.empty())                                                     //s不为空时为假，！改为真，确保s有字符
        s[0]= toupper(s[0]);

    cout << s << endl;

    //改变大小写直达遇见第一个空格
    for ( decltype(s.size()) index = 0;
          index != s.size() && !isspace(s[index]);
          ++index)                //!=判断两个值是否不相等，不相等时为真；&&：两个都为真时为真，先检查左边后检查右边，
        s[index] = toupper(s[index]);

    cout << s <<endl;

    for (decltype(s.size()) i = 0; i < s.size() && !isspace(s[i]); ++i) {
        char c = s[i];
        char upper = toupper(c);
        s[i] = upper;
    }

    for (decltype(s.size()) i = 0; i < s.size(); ++i) {
        char c = s[i];

        if (isspace(c))
            break;                                                  //中断循环

        char upper = toupper(c);
        s[i] = upper;
    }

    cout << s << endl;
    return 0;
}