/* sizeof运算符
 * 返回一个表达式或者一个变量占据的字节数，
 * 一字节等于八位
 *
 */
#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
    cout << sizeof(int) <<endl;

    //对指针用得到指针所指对象类型的字节数
    int i = 1;
    int *p1 = &i;
    cout << sizeof(*p1) <<endl;         //加解引用符为输出所指对象，不加为输出指针本身

    char c = 'a';
    cout << sizeof(c) << endl;          //char或者类型为char的表达式结果为1；

    int &r1 = i;
    char &r2 = c;
    cout << sizeof(r1) << endl;          //引用为被引用对象类型的大小
    cout << sizeof(r2) << endl;

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << sizeof(arr[10]) << endl;     //对数组求，分别对所有元素求一次sizeof然后求和

    //对字符串和容器使用，只返回类型固定部分的大小
    string str = {"hello"};
    string str1 = {"hello","world"};
    vector<int> v = {1,2};
    vector<int> v1 = {1,2,3,4};
    cout << sizeof(str) << endl;
    cout << sizeof(str1) << endl;
    cout << sizeof(v) << endl;
    cout <<sizeof(v1) << endl;
    return 0;
}