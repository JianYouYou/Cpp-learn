/* if语句
 * if else语句
 * 悬垂else
 */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    if(1)       //为真时输出，非0为真
        cout << "hello world!!" << endl;
    //if else 语句
    string str1 = "yes", str2 = "no", str3;
    cout << "你开心吗？回复yes or no" << endl;
    cin >> str3;
    if(str3 == "yes")
        cout << "hello world!" << endl;
    else
        cout << "byebye world!" << endl;
    return 0;
}
//悬垂else就是else会找最近的if进行匹配，为了程序的简洁客观性，嵌套ifelse语句的时候用{}括起来