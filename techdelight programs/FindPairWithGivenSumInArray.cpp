#include <iostream>

using namespace std;

int main()
{
    int n,sum,count=0;
    cout<<"enter the value of n : ";
    cin>>n;
    int a[n];
    cout<<"enter the array input : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the vlaue of sum :";
    cin>>sum;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j] == sum)
            {
                cout<<a[i]<<" "<<a[j]<<endl;
                count++;
            }
        }
    }
    if(count == 0)
    {
        cout<<"pair not found :) ";
    }
    return 0;
}
