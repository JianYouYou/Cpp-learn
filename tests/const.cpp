//
// Created by Jianyou on 24-10-20.
//
#include <iostream>
int main()
{
  using namespace std;
  int a = 1;
  const int *x = &a;
  ++a;
  cout << a << endl;
  cout << *x << endl;
  //const int b=2;
  //b=3;


  return 0;
}