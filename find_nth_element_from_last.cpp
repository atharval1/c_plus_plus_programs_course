#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cout<<"Enter the element you have to find from end ";
    cin>>key;
    
    int find = n-key;
    
    if(find>=0){
    cout<<a[find];
    }
    else{
        cout<<"not valid position";
    }
}