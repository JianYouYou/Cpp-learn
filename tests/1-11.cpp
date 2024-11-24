//让用户输出两个整数求两者中间所有整数的和
#include<iostream>
int main()
{
  using namespace std;
  int X,Y,sum=0;
  cout<<"please return two numbers"<<endl;
  cin>>X>>Y;
  if(X>Y)
  {
    while(X>=Y)
    {
      sum+=Y;
      ++Y;
    }
    cout<<sum<<endl;
  }
  else
  {
    while(Y>=X)
    {
      sum+=X;
      ++X;
    }
    cout<<sum<<endl;
  }
  return 0;
}