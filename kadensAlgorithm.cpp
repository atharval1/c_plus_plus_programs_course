#include<iostream>
#include<climits>
using namespace std;
int main(){
     int n;
    cin>>n;
    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxsum = INT_MIN, currentsum = 0;
    for (int i = 0; i < n; i++)
    {
        currentsum = currentsum + a[i];
        if (maxsum < currentsum)
            maxsum = currentsum;
 
        if (currentsum < 0)
            currentsum = 0;
    }
    cout<<maxsum;
}
 