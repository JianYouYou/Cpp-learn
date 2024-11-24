/*decltype(x) y
 * x是什么类型，y就被定义成什么类型，
 * decltype和auto不同，不会忽略顶层const的属性
 * 使用decltupe定义一个引用必须要初始化
 * decltype(f()) type = x;
 * decltype的括号内被推算出是什么数据类型，type就是什么数据类型；
 *Created by Jianyou on 2024/10/25.
 */
#include <iostream>
#include <typeinfo>
using namespace std;
int main()
{

  int n1 = 1,n2 = 2;
  int &r = n1;
  cout << r << endl;
  decltype(r) r2 = n2;
  cout << r2 << endl;

  decltype(r+0) n3 = 3; //r是引用，但r+0的运算结果是1+0=1，所以n3被设定为int型；
  cout << n3 << endl;


  int n4 =4, *p = &n3;
  decltype(*p) r3 = n4;//书里讲decltype（）内若是解引用类型的，那么推断出来的是引用型int&，GPT解释是int型，
  cout << typeid(*p).name() << endl;
  cout << r3 << endl;

    /*
  int x1 = 2 ,&rr1 = x1;
  cout << typeid(rr1).name() << endl;
  cout << typeid(x1).name() << endl;
    */

  int n5 = 5,n6 = 6;
  decltype((n5)) r4 = n6;//decltype若为双括号则必为引用
  cout << typeid(r4).name() << endl;
  cout << r4 << endl;
  return 0;
}
