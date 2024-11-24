//求50到100的和
#include<iostream>
int main()
{
    using namespace std;
    int X=50;
    int sum=0;
    while( X <= 100)
    {
        sum+=X;
        ++X;
    }
    cout << sum << endl;
    return 0;
}
