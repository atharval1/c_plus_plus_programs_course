#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i]  == key){
            return i+1;
        }
    }
    return -1;
}


int main()
{
    int n;
    cout<<"how many no you want to insert ";
    cin>>n;

    int arr[n];
    cout<<"Enter the "<< n<<" numbers\n";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the no u want to find ";
    cin>>key;
    
    cout<<linearSearch(arr,n,key);


    return 0;
}