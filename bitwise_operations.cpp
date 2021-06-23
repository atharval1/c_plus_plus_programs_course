#include <iostream>
using namespace std;

int main()
{
    //odd or even number
    int a = 8;
    //when we add 1 to given binary number if at last we get 1 then number is odd
    //                         4 = 100
    //                         1 = 001
    //us & then out will be        000 so number is even
    if ((a & 1) == 0)
    {
        cout<<"number is even  \n";
    }
    else
    {
        cout<<"number is odd \n";
    }

    //swap of two number using bitwise and without using third number
    int x = 5, y = 7;
    cout<<"num are " << "x is :" << x << " y is :" << y <<endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    cout<<"swaped num are " << "x is :" << x << " y is :" << y<<endl;
}
