//列表初始化,设定初值的初始化，显式初始化
#include<iostream>
using namespace std;
int main()
{
    int i1 = 1;
    int i2(2);
    int i3 = {3};
    int i4{4};
    cout << i1
         << i2
         << i3
         << i4
         << endl;
    return 0;
}