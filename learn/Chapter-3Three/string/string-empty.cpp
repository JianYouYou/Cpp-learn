//
// Created by Jianyou on 2024/11/5.
//
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string line;
    while(getline(cin,line))    //getline:读取一整行字符串；
    {
        if(!line.empty())              //逻辑非运算符（！）返回与运算结果相反的数，line为字符串时为假，！返回相反结果为真，从而输出line
        {                              //empty检查字符串是否为空，为空时为真，
            cout << line << endl;
        }
    }
    return 0;
}