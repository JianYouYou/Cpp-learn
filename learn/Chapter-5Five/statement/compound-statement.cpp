/* 符合语句
 * {}
 * 用花括号括起来的语句和声明
 * 也被叫做块，一个块就是一个作用域
 * 块不以;结尾，不用在后面的}后加;
 *
 * 语句作用块，在语句内定义的语句只能在语句内使用，块外视为为定义；
 */
#include<iostream>
using namespace std;
int main()
{
    int val =1, sum;       //求1到10的和
    while (val <= 10) {
        sum += val;
        ++val;
    }
    cout << sum << endl;
    return 0;
}