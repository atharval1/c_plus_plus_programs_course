#include <iostream>
using namespace std;

int main()
{
	int j = 0;
begin:
	j+=1;
	cout << j <<endl;

	if (j < 100)
	{
		goto begin;
	}
	return 0;
}
