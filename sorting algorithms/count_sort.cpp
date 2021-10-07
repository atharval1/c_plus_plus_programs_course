#include<iostream>
using namespace std;

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}


int maximum(int A[], int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i]){
            max = A[i];
        }
    }
    return max;
    
}

void countSort(int * A, int n){
    int i, j;

    int max = maximum(A, n); 
    int count[max+1];

    for (i = 0; i < max+1; i++)
    {
        count[i] = 0; 
    }

    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1; 
    }

    i =0; // counter for count array
    j =0; // counter for given array A

    while(i<= max){
        if(count[i]>0){
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
        }
    } 
}

int main(){
    int n;
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    countSort(A, n);
    printArray(A, n); 
    return 0;
}
