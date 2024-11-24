/* priority level  优先级
 * priority n.优先,重点,优先级
 * 先看括号
 * 然后运算符的优先级
 * 优先级相同看结合律
 * 总的来说先看括号，让后乘除，最后加减，从左到右
 */
#include<iostream>
using namespace std;
int main()
{
    // 括号很重要，一个地方用不用括号有很大区别
    int i[5] = {2,4,6,8,10};
    int i1 = *(i + 3);                                                                                                  //整体被括号括起来，先算括号内的，i+3将i所指后移3位，即i[0]变为i[3]
    cout << i1 << endl;
    int i2 = *i + 3;                                                                                                    //先解引用i，在+3.即2+3;
    cout << i2 <<endl;
    return 0;
}
