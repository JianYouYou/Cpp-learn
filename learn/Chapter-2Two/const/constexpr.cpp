//
// Created by Jianyou on 2024/10/24.
//
#include <iostream>
using namespace std;
int main()
{
  const int max_files = 20;
  const int limit = max_files + 1;
  cout << limit << endl;
  int staff_size = 27;
  cout << staff_size << endl;
  //const int sz = get_size();
  constexpr int mf =20;
  cout << mf << endl;
  //constexpr int limit =mf +1;
  //constexpr int sz = size();
  constexpr const int *pi1 = nullptr;    //声明指针constexpr需要将初始值设为0或nullptr（空指针）或者存储于某个固定地址的对象；
  cout << *pi1 << endl;                                       //设置空指针多用nullptr，更符合现代C++编辑习惯
  const int y = 1;
  cout << y << endl;
  //constexpr const int *pi2 = &y;
  /*
   *Constexpr variable 'pi2' must be initialized by a constant expression：constexpr 变量 pi2 的初始化必须使用一个常量表达式。
   *const int y = 1;是一个常量，不是常量表达式，若想要使&y正确需要在const的前加constexpr；
   */
  constexpr const int y2 = 2;
  cout << y2 << endl;
  //constexpr const int *pi3 = &y2;

  const int *p = nullptr;
    cout << *p << endl;
  constexpr int *q = nullptr;
    cout << *q << endl;
  constexpr int *np = nullptr;
  cout << *np << endl;
  int j =0;
  constexpr int i =42;
  cout << i << endl;
  //constexpr const int *p2 = &i;
  const int *p1 = &j;
  cout << *p1 << endl;

  return 0;
}

