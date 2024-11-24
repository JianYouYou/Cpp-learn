/* 成员访问运算符
 * 能访问数组，容器，字符串，类，指针等
 * ptr-> mem   /  (*ptr).mem
 * 解引用运算符低于点运算符别忘了加括号
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s = "hello world!!";
    string *p1 = &s;
    auto a = (*p1).size();
    cout << a << endl;
    return 0;
}