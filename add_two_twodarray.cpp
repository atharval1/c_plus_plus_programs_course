#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the row and column of the array ";
    cin>>n>>m;
    int a[n][m];
    int b[n][m];
    int sum[n][m];

    cout<<"Enter the first array Element \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    cout<<"Enter the second array Element \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cin>>b[i][j];
        }
    }

    cout<<"Sum of two array is : \n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            sum[i][j] = b[i][j] +a[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            cout<<sum[i][j]<<" ";
        }
        cout<<endl;
    }


}