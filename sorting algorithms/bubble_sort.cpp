
                                                                // Using vector //
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    int x;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        vec.push_back(x);
    }

    int counter=1;
    while (counter<n)
    {
        for(int i=0;i<n-counter;i++){
            if(vec[i]>vec[i+1]){
                int temp=vec[i];
                vec[i]=vec[i+1];
                vec[i+1]=temp;
            }
        }
        counter++;
    }

    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}


                                                                // using array //
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];

//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     int counter=1;
//     while (counter<n)
//     {
//         for(int i=0;i<n-counter;i++){
//             if(a[i]>a[i+1]){
//                 int temp=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=temp;
//             }
//         }
//         counter++;
//     }
    
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }

//     return 0;
// }