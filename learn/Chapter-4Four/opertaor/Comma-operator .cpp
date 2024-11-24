/* 逗号运算符
 * 逗号运算符(,) 左右各有一个表达式，先算左边，将值丢掉，然后算右边并返回右边表达式的值
 * 被丢弃是指不作为逗号表达式的结果返回，实际表达式运行后的结果还是被保存下来
 */
#include<iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = (a++ , a + 10);         //先给a的值进行运算然后+1,a + 10 = 6 + 10;然后a+1;
    cout << a << endl;              //输出a = 6;
    cout << b << endl;
    return 0;
}