#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int matrix[m][n];

    for(int i=0;i<m; i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
        int row_start=0,row_end=m-1;
        int col_start=0,col_end=n-1;
        
        while(row_start <=row_end && col_start<=col_end){
            
            for(int c=col_start; c<=col_end; c++){
                cout<<matrix[row_start][c]<<" ";
            }
            
            for (int r = row_start + 1; r <= row_end; r++)
            {
                cout<<matrix[r][col_end]<<" ";
            }
            if(row_start<row_end && col_start<col_end){
                for(int c=col_end-1; c>col_start;c--){
                    cout<<matrix[row_end][c]<<" ";
                }
                for (int r = row_end; r > row_start; r--){
                    cout<<matrix[r][col_start]<<" ";
                }
            }
            row_start++;
            row_end--;
            col_start++;
            col_end--;
        }
}
