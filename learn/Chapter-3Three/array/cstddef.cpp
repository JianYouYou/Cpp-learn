//用下标访问数组里的对象
//使用数组下标时，通常定义为size_t，无符号类型，被设计的足够大，能够用来表达内存中任意对象的大小
#include<iostream>
#include<string>
#include<string>
#include<vector>
#include<cstddef>
using namespace std;
int main()
{
    unsigned int i1[11] = {};
    unsigned x;
    while (cin >> x)
    {
        if (x <= 100)
            ++i1[x / 10];
    }
    //按ctrl + d 结束输入
    for (int i = 0; i < 11; ++i)
    {
        cout << "i1[" << i << "] = " << i1[i] << endl;
    }

    int *p = &i1;
    return 0;
}