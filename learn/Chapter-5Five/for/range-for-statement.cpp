/* 范围for循环，用于遍历容器或字符串的元素
 * for( 定义一个变量用来便利容器里的元素，循环一次后移一位 : 容器)
 *      表达式
 */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "hello world!!";
    for (auto s : str){
        s = toupper(s);
        cout << s;
    }
    return 0;
}