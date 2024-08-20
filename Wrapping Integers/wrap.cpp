
#include <iostream>

using namespace std;

int main()
{
    // Wrapping around an unsigned short integer

    cout << "\nThe range of unsigned short integers (assuming to be 2 bytes): 0~65535";
    unsigned short int a = 65535;
    cout << "\n\n'a' is an unsigned short integer: a = " << a;
    cout << "\n\n'a' is incremented by 1: a++";
    a++;
    cout << "\nNow, a = " << a << " !!";
    cout << "\nAgain, 'a' is incremented by 1: a++";
    a++;
    cout << "\nNow, a = " << a << " !!!";


    cout << "\n\n---------------------------";


    // Wrapping around a signed short integer

    cout << "\n\nThe range of signed short integers (assuming to be 2 bytes): -32768~32767";
    signed short int b = 32767;
    cout << "\n\n'b' is a signed short integer: b = " << b;
    cout << "\n\n'b' is incremented by 1: b++";
    b++;
    cout << "\nNow, b = " << b << " !!";
    cout << "\n\nAgain,'b' is incremented by 1: b++";
    b++;
    cout << "\nNow, b = " << b << " !!!";

    cout << endl;

    return 0;
}
