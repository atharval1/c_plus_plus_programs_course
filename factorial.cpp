#include<iostream>
#include<math.h>
using namespace std;

int fact(int n){
    int factorial = 1;

    for(int i=2;i<=n;i++){
        factorial = factorial*i;
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"Enter the number that you want to find factroial :";
    cin>>n;

    int ans = fact(n);
    cout<<ans;
    return 0;

}