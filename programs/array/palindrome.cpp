#include <iostream>
using namespace std;

int main()
{
    int cnt=0;
    string s;
    cin>>s;
    int length = s.length();
    string str;

    for(int i=length-1,j=0;i>=0,j<length;i--,j++){
        str[j] = s[i];
    }

     for (int  i = 0; i < length; i++)
    {
        if(s[i] == str[i])
        {
            cnt++;
        }
    }

    if(cnt==length){
        cout<<"it is palindrome ";
    }
    else{
        cout<<"not a palindrome";
    }
   
    return 0;
}
