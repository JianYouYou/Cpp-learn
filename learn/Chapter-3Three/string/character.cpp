//处理string变量的单个字符
// Created by Jianyou on 2024/11/6.
//
//范围for语句range for
/* for( 定义一个变量，访问对象的一个基础元素，每次迭代，变量清空并接受下一个元素值  : 一个对象 )
             表达式
*/
#include<iostream>
#include<string>
#include<cctype>    //cctyope头文件，定义一组标准库函数处理改变字符的特性；、
int main()
{
    using namespace std;

    string str1("hello,worle!");

    for(auto c : str1)
        cout << c << endl;
    //识别用户输入的字符串并一个字符一行的输出
    return 0;
}