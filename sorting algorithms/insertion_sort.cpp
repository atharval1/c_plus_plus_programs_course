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

    for (int i = 1; i < n; i++)
    {
        int temp = vec[i];
        int j = i-1;
        while (j>=0 && vec[j]>temp)
        {
            vec[j+1] = vec[j];
            j--;
        }
        vec[j+1] = temp;
        
    }
    
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}
                                                                // Using array //

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;
//     int vec[n];
//     int x;
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> vec[i];
//     }

//     for (int i = 1; i < n; i++)
//     {
//         int temp = vec[i];
//         int j = i-1;
//         while (j>=0 && vec[j]>temp)
//         {
//             vec[j+1] = vec[j];
//             j--;
//         }
//         vec[j+1] = temp;
        
//     }
    
//     for (int i=0;i<n;i++)
//     {
//         cout << vec[i] << " ";
//     }

//     return 0;
// }