#include<iostream>
#include<climits>
using namespace std;

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
    
    int maxno=INT_MIN,minno=INT_MAX;

    for(int i=0;i<n;i++){
        // if(arr[i] > maxno){
        //     maxno = arr[i];
        // }
        maxno = max(maxno,arr[i]);


        // if(arr[i] < minno){
        //     minni = arr[i];
        // }
        minno = min(minno,arr[i]);
    }
    cout<<"max No "<<maxno<<" min no "<<minno<<endl;
    return 0;
}