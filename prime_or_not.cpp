#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    
    cout<<"Enter the number you want to check prime or not:";
    cin>>n;
    
    bool flag =0;
    
    for(int i=2;i<sqrt(n);i++)
    {
        if(n%2 == 0){
            flag = 1;
            cout<<"Not prime No";
            break;
        }
    }
    
    if(flag == 0){
        cout<<"prime No";
    }
}