#include<iostream>
using namespace std;
int main()
{
    
    int n,i,mask,result;
    cout<<"Enter the any number : "<<endl; 
    cin>>n;

    cout<<"\nenter the i th number that have to clear ";
    cin>>i;

    mask = ~(1<<i);

    result = n & mask;

    cout<<"\nchanged number : "<<result;





    return 0; 
}