/* Ƕ��if
 *
 */
#include<iostream>
#include<string>
using namespace std;
int main()
{
    cout << "����ɼ�" << endl;
    int i;
    cin >> i;
    if(i<60)
        cout << "������" << endl;
    else {
        if (i > 90)
            cout << "���㣡" << endl;
        else
            cout << "����" << endl;
    }
    if (i < 0) {
        // sdf
    } else if ( i < 10) {

    } else if ( i < 20) {

    } else {

    }


    if (i == 1) {

    } else if (i == 2) {

    } else if (i == 3) {

    } else if (i == 4) {

    } else if (i == 5) {

    } else {

    }

    switch (i) {
        case 1:
            break;
        case 2:
            break;
        default:
            break;
    }
    return 0;
}