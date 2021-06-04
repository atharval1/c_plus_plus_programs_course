#include<iostream>
using namespace std;

int main()
{
 
    long binary1, binary2;
    int i = 0, remainder = 0, sum[20];
 
    cout << "Enter the first binary no ";
    cin>>binary1;

    cout << "Enter the second binary no ";
    cin>>binary2;

    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;

    cout<<"sum of two binary No ";
    while (i >= 0)
        printf("%d", sum[i--]);
    return 0;
}