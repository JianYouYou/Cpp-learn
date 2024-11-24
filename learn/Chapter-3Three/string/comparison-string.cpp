//比较string
// Created by Jianyou on 2024/11/6.
//
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string line = "hello world";
    string line1 = "hello";
    string line2 = "heya";
    string line3 = "heya";
    string line4 = "Heya";
    string line5 = "world";
    {
        if (line2 == line3)
            cout << "They are equal." << endl;
        else
            cout << "They are not equal." << endl;
    }                                //==检验两个string是否相等

    {
        if (line3 != line4)
            cout << "They are not equal." << endl;
        else
            cout << "They are equal." << endl;
    }                                //=!检验两个string是否不相等

    {
        if (line > line1)
            cout << line << endl;
        else
            cout << line1 << endl;
    }                              //如果两个字符串长度不同，短的字符串的所有字符在长的字符串上的位置都一一对应，则短的字符串小于长的字符串

    {
        if (line1 > line2)
            cout << line1 << endl;
        else
            cout << line2 << endl;
    }                              //如果两个字符串长度不同，短字符串的字符的位置也不在长字符上一一对应，则比较第一个相异字符的大小，对应的ASCII值越大字符串越大；

    //将两个string字符串相加
    string line6 = line1 + line5;
    cout << line6 << endl;
    line1 += line5;                //把右边的字符串加到左边；
    cout << line1 << endl;

    //字面值与sgring变量相加
    //要确保+左边或右边起码有一个string类型的对象,
    string line7 = "hello";
    string line8 = line7 + ',' + line5 + '!' + '!';     //+"!!"
    /*为什么这里+两边两个！可以相加，因为运算规则是连续输入和连续输出
     * （（（line7 + ',' ）+ line5 ）+ '!' ）+ '!';
     * 相当于左边的！已经被加紧了前面的string变量，
     * 是hello，world！再加！
     * 可以操作
     */
    cout << line8 << endl;

    //string line9 = '1' + '2';//不能直接把字面值相加；

    return 0;
}
/*
 * string比较对大小写敏感；
 */