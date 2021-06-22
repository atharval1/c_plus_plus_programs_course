#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"enter row and column : ";
    cin>>n>>m;
    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    cout<<"matrix is : \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    int x;
    cout<<"Enter the element want to search : ";
    cin>>x;

    bool flag = false;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++){
            if(a[i][j] == x)
            {
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }

    if(flag){
        cout<<"element found";
    }
    else{
        cout<<"Element is not found";
    }

    return 0;
}