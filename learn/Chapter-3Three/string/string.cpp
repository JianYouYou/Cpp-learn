//
// Created by Jianyou on 2024/10/26.
//
#include <iostream>
#include <string>
using namespace std;
int main()
{

  //定义string的方法
  string s1 = "1234";    //拷贝初始化，用=
  cout << s1 << endl;
  string s2 = s1;
  cout << s2 << endl;
  string s3(s2);
  cout << s3 << endl;
  string s4("4");
  cout << s4 << endl;
  string s5 = "5";
  cout << s5 << endl;
  string s6(6,'6');//直接初始化
  cout << s6 << endl;
  string s7 = string(7,'7');//用=的直接初始化
  cout << s7 << endl;

  //输出string
  string ss;
  //cin >> ss;           //不用加 >> endl;自动省略空格从第一个字符开始，识别到下一个空格
  //cout << ss << endl;
  string ss1 ,ss2;
  //cin >> ss1 >> ss2;  //可以连续，省略空格，从第一个字符开始识别，到下一个空格结束，然后再从第一个字符开始；
  //cout << ss1 << " " << ss2 << endl;

  //读取输出未知数量的string对象
  string word;
  //while (cin >> word)
    cout << word << endl;//逐个输出，每个之间换行

  //用 'getline' 代替 '>>' 输出有空格的string对象
  string word1;
  getline(cin, word1);    //getline的用法
  cout << word1 << endl;

  string word2;
  while(getline(cin, word2))
    cout << word2 << endl;

  //empty函数，
  int line;
    while(getline(cin,line))
          if(!line.empty())
          cout << line <<endl;

  return 0;
}
