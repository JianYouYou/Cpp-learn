//iterator就是迭代器。使用迭代器可以访问容器里的要素和string变量的字符
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
int main()
{
    string s("hello world!!");
    if (s.begin() != s.end())
    {
        auto it = s.begin();
        *it = toupper(*it);
    }
    cout << s << endl;
    string s1("some thing.");
    for                                                 //解引用迭代器可获得迭代器所指的对象(使用迭代器引用所包含的值要用解引用)
    (
    auto it1= s1.begin();   //定义一个变量存储s1的第一个字符(用s1.begin()的返回值初始化it1)
    it1 != s1.end() && !isspace(*it1);       //检查it1是否到达尾部迭代，然后判断是否为空
    ++it1
    )                                      //使it1指向下一个字符
    {
        *it1 = toupper(*it1);
    }
    cout << s1 << endl;
    return 0;
}
/* 养成使用迭代器和!= ==的习惯
 * 不用在意迭代器的类型，无需知道，可以用iterator或者const_iterator表示其类型；
 */