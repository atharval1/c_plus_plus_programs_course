#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the No you want check is amstrong or not :";
    cin>>n;

    int orignal = n;
    int sum = 0;

    while (n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,3);
        n=n/10;
    }
    
    if(sum == orignal){
        cout<<"Armstrong NO ";
    }
    else{
        cout<<"Not armstrong no";
    }
}