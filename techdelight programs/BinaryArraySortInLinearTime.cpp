#include <bits/stdc++.h>
using namespace std;

void sort(int a[], int n)
{
    int zeros = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            zeros++;
        }
    }
    int k = 0;
    while (zeros--)
    {
        a[k++] = 0;
    }
    while (k < n)
    {
        a[k++] = 1;
    }
}

int main()
{
    int n;
    cout << "Enter the n value : ";
    cin >> n;
    int a[n];

    cout << "Enter the array elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i];
    }

    return 0;
}