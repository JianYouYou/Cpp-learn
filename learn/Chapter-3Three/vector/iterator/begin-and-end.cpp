/* begin和end的返回类型由变量决定，
 * 变量是常量就为const_iterator
 * 变量不是常量就为iterator
 */
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
int main()
{
    vector<string> v1= {"hello","world"};
    const vector<string> v2;
    auto it1 = v1.begin();          //begin()指示变量的第一个字符
    auto it2 = v2.begin();     //end()指容器尾元素的下一个位置

    (*it1).empty();
    it2->empty();
    /* *解引用才能访问it1所指的对象
     * ()用括号，不然empty所作用的对象是it1，it1是个迭代器，用不了empty函数
     * ->简化了该操作 it->mem 等价于 (*it).mem 把解引用和成员访问两个步骤合在一起
     */
    //不能在范围for循环里给vector添加新要素
    return 0;
}
