#include<iostream>
using namespace std;
int main()
{

    int n,find;
    cout<<"Enter the number ";
    cin>>n;

     cout<<"Enter i th bit to chnage ";
    cin>>find;

    int mask = 1<<find;
    cout<<"mask "<<mask<<endl;
    int result = n | mask;
    cout<<"chnaged number is : "<< result;


    return 0;
}