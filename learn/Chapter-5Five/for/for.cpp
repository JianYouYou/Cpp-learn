/* for循环
 * for(定义条件，可以为空，为空时作用域里要有停止循环的语句;
 *     循环条件;
 *     修改条件)
 */
#include<iostream>
using namespace std;
int main()
{
    int sum = 0;
    for(int i = 1;i<=10;i++){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}