/* 显式转换
 * 强制转换变量属性
 *          cast_name<type>(要转换的变量)
 *               |     |
 *       下面三种cast 转为什么类型
 */
#include<iostream>
using namespace std;
int main()
{
    //static_cast
    //转换变量类型但是不能转换变量const属性,
    //使用 static_cast 进行显式类型转换时，原始变量的类型不会改变。static_cast 只是创建了一个新的变量，表示转换后的值，而原始变量保持其原有的类型
    int i = 1;
    double d = 3.14;
    double di = static_cast<double>(i);
    cout << di << endl;
    int id = static_cast<int>(d);
    cout << id << endl;

    //const_cast
    //用于去掉指针或引用的 const 或 volatile 属性
    //将常量转换为非常量，将非常量转换为常量
    //和static_cast一样，原来的类型不会变
    const int i1 = 1;
    int i2 = 2;
    const int *ptr = &i1;
    int *p1 = &i2;
    int *ptr1 = const_cast<int*>(ptr);              //用ptr1修改i1的值是个未定义行为，因为i1是常量不能改变
    const int *ptr2 = const_cast<const int*>(p1);   //创建了一个常量储存显式转换后的p1;


    //reinterpret_cast
    //将一个指针转变成另一个不相关的指针。指针与整数转换
    return 0;
}