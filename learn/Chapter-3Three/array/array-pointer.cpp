//
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    //对数组的元素使用取地址符就能得到指向该元素的指针
    string str[3] = {"hello", "world", "!!!"};
    string *pi = &str[0];
    cout << *pi << endl;
    string *pi1 = str;          //默认指向数组首元素；

    //使用数组作为auto的初始值时，使用数组的第一个元素，定义的变量是一个指针，指向数组第一个数
    int i1[] = {1,2,3};
    auto a1 = i1;
    cout << *a1 << endl;

    //不同与auto decltype不会变成指针，是整个数组；
    decltype (i1) di= {4,5,6};//di是大小为3的数组
    for(int f = 0; f<3; ++f)
        cout << di[f] << endl;

    //begin() end()

    return 0;
}
