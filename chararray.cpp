#include<iostream>
using namespace std;
int main()
{

    char a[100] = "orange";
    int j=0;
    while(a[j] != '\0'){
        cout<<a[j]<<endl;
        j++;
    }
    
    char arr[100];
    cout<<"Enter the char array ";
    cin>>arr;
    cout<<arr[2];
    return 0;
}