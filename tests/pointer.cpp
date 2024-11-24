//
// Created by Jianyou on 2024/10/20.
//
#include <iostream>
int main()
{
  using namespace std;
  int a = 1;
  int *p = &a;
  int **p2 = &p;
  double d = 1.1;
  void *p3 = &d;
  cout << *static_cast<double*>(p3) << endl;
  return 0;
}