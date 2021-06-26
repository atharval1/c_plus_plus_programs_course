
#include <iostream>
using namespace std;

int main(){
    string s;
    cout<<"enter the string : ";
    cin.ignore(); // Ignore NEWLINE
    getline(cin, s);

    int n = s.length();
	int res = 0, curr_len = 0, i;
	
	for (int i = 0; i < n; i++) {

		if (s[i] != ' ')
			curr_len++;
		else {
			res = max(res, curr_len);
			curr_len = 0;
		}
	}

    cout<<max(res,curr_len);

}




