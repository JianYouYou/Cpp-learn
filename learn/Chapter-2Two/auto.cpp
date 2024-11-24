//自动识别数据的类型
// Created by Jianyou on 2024/10/24.
//
#include <iostream>
using namespace std;
int mian()
{
  auto n1 = 1;              //n被识别为int型
  cout << n1 << endl;
  auto n2 = 3.14;
  cout << n2 << endl;      //n2被识别为double型

  int n3 = 3;
  auto pi = &n3;           //pi被推断为int*
  cout << *pi << endl;

  const auto n4 = 4;       //auto会忽略顶层const，保留底层const，如果想让auto推断出来的数据类型有const类型，需要明确加入const；
  cout << n4 << endl;


/*
  int i = 0, &r= i;
  auto a = r;
  const int ci = i,&cr =ci;
  auto b = ci;                //b被推断为int型，ci的顶层const属性被忽略；
  auto c = cr;
  auto d = &i;
  auto e = &ci;
  const auto f = ci;
  auto &g = ci;
  //auto &h = 42;
  const auto &j = 42;
  auto k = ci, &l = i;
  //auto &m = ci, *p = &ci;
  const auto &n = i, *p2 =&ci;
*/
  return 0;
}