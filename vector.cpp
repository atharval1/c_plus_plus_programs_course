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
    for (auto i = vec.begin(); i != vec.end(); ++i)
    {
        cout << *i << " ";
    }

    return 0;
}