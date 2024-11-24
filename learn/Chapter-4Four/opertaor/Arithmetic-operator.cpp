/* 算数运算符
 * 加减乘除余
 */
#include<iostream>
using namespace std;
int main()
{
    int i1 = 1;
    int i2 = 2;
    int i3 = i1 + i2;
    cout << i3 << endl;
    int i4 = i3 - i2;
    cout << i4 << endl;
    int i5 = i1 * i2;
    cout << i5 << endl;
    int i6 = i2 / i1;
    cout << i6 << endl;
    int i7 = i3 % i2;
    cout << i7 << endl;
    //布尔值不应该参与运算
    // -m / n 和 m / (1n)都等于-(m / n)
    // m % (-n) 等于 m % n
    // (-m) % n 等于 -(m % n)
    return 0;
}
