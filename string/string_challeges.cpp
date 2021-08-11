#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string str = "abjdhhdghhd";
    cout<<'a' - 'A'<<endl; //getting 32 as diffrence

    //convert string into uppercase

    for(int i=0;i<str.size();i++){
        if(str[i] >= 'a' && str[i]<='z'){
            str[i] -= 32;
        }
    }

    cout<<str<<endl;

    //if we have to convert upper case to lowercase
    for(int i=0;i<str.size();i++){
        if(str[i]>='A' && str[i]<='z'){
            str[i]+=32;
        }
    }
    cout<<str<<endl;

    string s ="hdfhsdghhhgjhd";

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<s<<endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<s<<endl;
    return 0;
}
