/* 递增递减运算符
 */
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    //前递增后递增，前递增先加后用，后递增先用后加，递减同理
    int i = 1;
    int i1 = i++;           //将i给i1后加1
    cout << i1 << endl;
    int i2 = ++i;           //将i加1后赋给i2
    cout << i2 << endl;

    //vector混用引用和递增
    vector v = {1,2,3,4,5};
    auto pbeg = v.begin();
    while (pbeg != v.end() && *pbeg >= 0)
        cout << *pbeg++ << endl;                       //后置递增递减运算符优先级大于解引用运算符 *pbeg++  =  *(pbeg++) 先输出pbeg引用的v.begin然后后移一位；

    //注意运算顺序，防止出现未定义行为，比如在一条表达里修改并读取同一变量
    string s = {"hello world!!"};
    auto beg = s.begin();
    while (beg != s.end() && !isspace(*beg))        //避免在同一表达式中对迭代器进行修改和自增操作，以防止未定义行为。
        *beg = toupper(*beg++);
    return 0;
}