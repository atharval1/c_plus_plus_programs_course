#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    string str;
    str = to_string(a);
	
	cout << stoi(str, 0, 2);

	return 0;
}
