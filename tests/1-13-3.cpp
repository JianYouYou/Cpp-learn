//用for循环写1-11
#include<iostream>
int main()
{
  using namespace std;
  cout<<"please return two numbers"<<endl;
  int x,y,sum=0;
  cin>>x>>y;
  if(x>y)
    for(;x>=y;++y)
      sum+=y;
  else
    for(;x<=y;++x)
      sum+=x;
  cout<<sum<<endl;
  return 0;
}
//*** for循环初始化语句可以为空，for(;...;...) ***
