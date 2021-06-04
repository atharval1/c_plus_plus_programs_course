#include<iostream>
using namespace std;

int binarySearch(int arr[],int n, int key){
    int s = 0;
    int e = n;
    while (s<=e)
    {
        int mid = (s+e)/2;

        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] > key){
            e = mid-1;
        }
        else{
            e = mid+1;
        }

    }
    return -1;
}


int main()
{
    int n;
    cout<<"how many numer you want to enter ";
    cin>>n;
    int arr[n];
    cout<<"Enter the "<<n<<" numbers";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int key;
    cout<<"Enter the number You want to find ";
    cin>>key;
    
    cout<<binarySearch(arr,n,key);


    return 0;
}