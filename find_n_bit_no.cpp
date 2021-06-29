#include <iostream>
using namespace std;

int main()
{
    int num, n, bitStatus;
    cout<<"Enter any number: ";
    cin>>num;

    /* Input bit position you want to check */
    cout<<"Enter nth bit to check (0-31): ";
    cin>>n;

    /* Right shift num, n times and perform bitwise AND with 1 */
    bitStatus = (num >> n) & 1;

    int newstatus = (num>>n);

    cout<<"The "<<n<<" bit is set to "<<bitStatus;

    return 0;
}

