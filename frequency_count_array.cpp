#include <iostream>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max = a[0];

    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max =a[i];
        }
    }
    int b[max+1] = {0};

    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    
    for(i=0;i<max+1;i++)
    {
        if(b[i] !=0 ){
        cout<<i<<" frequencies are "<<b[i]<<endl;
        }
        
    }
    
    return 0;
}
