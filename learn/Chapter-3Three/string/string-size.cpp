//
// Created by Jianyou on 2024/11/6.
//
#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string line;
    while (getline(cin,line))
            if (line.size() < 5)     //size函数用来识别字符串的长度，即字符串的字符个数,这里与5做比较，输出字符数量小于5的一整行，空格也算；
        cout << line << endl;
/*
 * size函数返回值的类型是string::size_type,是个unsigned类型的值；
 * 而且足够放下任何长度的string类型的变量；
 * 允许使用auto和decltype来推断变量的类型；
 */

    return 0 ;
}
