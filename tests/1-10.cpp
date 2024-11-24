//用递减运算符把10到0列出
#include<iostream>
int main()
{
  using namespace std;
  int A=10;
  while(A>=0)
  {
    cout<<A<<endl;
    --A;
  }
  return 0;
}