#include<iostream>
#include<math.h>
using namespace std;

int sum(int n){

    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum+=i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter n number u want to add :";
    cin>>n;
    cout<<sum(n)<<endl;

    return 0;
    
}