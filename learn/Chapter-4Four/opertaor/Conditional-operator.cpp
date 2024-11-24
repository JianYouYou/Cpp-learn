/* 条件运算符
 * ?:
 * 判断条件表达式 ? 表达式 : 表达式；
 * 允许把简单的if else 逻辑嵌入到单个表达式里
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    //输入成绩判断是否及格
    int grade;
    cout << "please enter grades" << endl;
    cin >> grade;
        string finalgrade = (grade > 60) ? "pass" : "fail"; //判断表达式为正 输出第一个表达式 否则输出第二个表达式，表达式都是左值或都能转换为同一种类型的左值，输出结果就为左值
    cout << finalgrade << endl;

    //还能能嵌套条件运算符
    string finalgrade1 = (grade >= 90) ? "high pass"
                                      : (grade < 60) ? "fail" : "pass" ;
    cout << finalgrade1 << endl;

    //条件运算符优先级很低，输出表达式用条件运算符记得加括号
    cout << ((grade >60) ? "pass" : "fail") << endl;
    //不加最外层的括号就变成先输出grade然后在进行条件表达式的判断，不会输出比较结果

    return 0;
}