/* if���
 * if else���
 * ����else
 */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    if(1)       //Ϊ��ʱ�������0Ϊ��
        cout << "hello world!!" << endl;
    //if else ���
    string str1 = "yes", str2 = "no", str3;
    cout << "�㿪���𣿻ظ�yes or no" << endl;
    cin >> str3;
    if(str3 == "yes")
        cout << "hello world!" << endl;
    else
        cout << "byebye world!" << endl;
    return 0;
}
//����else����else���������if����ƥ�䣬Ϊ�˳���ļ��͹��ԣ�Ƕ��ifelse����ʱ����{}������