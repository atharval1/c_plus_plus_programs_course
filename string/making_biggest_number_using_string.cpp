#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s ="1547894";

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    // anather trick
    string s1="1547894";
    sort(s1.begin(), s1.end(), greater<int>());
    cout<<s1<<endl;

    return 0;
}
