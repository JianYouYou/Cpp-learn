//
// Created by Jianyou on 2024/11/8.
//
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
int main()
{
    //7种基础初始化vector的方法
    vector<int> i1;                  //空容器,执行默认初始化
    vector<int> i2(i1);              //i2包含i1包含的所有元素；
    vector<int> i7 =i1;              //等价与i2(i1)
    vector<int> i3(5,6);    //包含了5个元素，每个元素的值都是6；
    vector<int> v4(5);            //包含了5个重复执行默认初始化的对象
    vector<int> v5{1,2,3,4};         //包含了初始值个数的元素，每个元素被赋予了相应元素的初始值；
    vector<int> v6={1,2,3,4};        //等价于v5

    //****列表初始化
    vector<string> s = {"hello","world""!"};

    //建造指定数量的元素
    vector<int> ii1(10 , 1);      //建造10个元素，每个都被初始化为1；

    //****值初始化，只给元素数量，让容器自己给元素赋值，
    vector<string> s1(10);
    /*使用这种赋值有两种限制
     * 其一，要求必须给初始值的类 不能用 这种初始化类型
     * 其二，只给数量不给值的情况 必须用 这种方法
     */

    vector<int> ii2(10 , 1);
    vector<int> ii3{10 ,1};
    vector<string> ss1{10 , "hi"};
    /* 初始化时注意区分括号
     * ()圆括号:初始化了10个元素，每个元素都被赋值1；
     * {}花括号:初始化了2个元素，一个是10一个是1；
     * ss1用了花括号形势，但是提供的值不能被用来列表初始化，所以被判定为了设定了10个元素，赋值为hi
     */

    return 0;
}