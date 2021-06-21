//check if there exist two element in array such that there sum is equal to given K
#include<iostream>
#include<climits>
using namespace std;

bool pairsum(int a[],int n,int k){

    //Time complexity will be O(n^2)

    // for(int i=0;i<n-1;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(a[i]+a[j] == k){
    //             cout<<i<<" "<<j<<endl;
    //             return true;
    //         }
    //     }
    // }
    // return false;


    ////Time complexity will be O(n) here array will be sorted if not then array will sort first 
    int low=0;
    int high=n-1;
    while(low<high){
        if(a[low]+a[high] == k){
            cout<<low<<" "<<high<<endl;
            return true;
        }
        else if(a[low] + a[high] > k){
            high--;
        }
        else{
            low++;
        }
    }
    return false;
}


int main(){
    
    int a[] ={2,4,7,11,14,16,20,21};
    int k=31;
    cout<<pairsum(a,8,k)<<endl;
    
    return 0;

}