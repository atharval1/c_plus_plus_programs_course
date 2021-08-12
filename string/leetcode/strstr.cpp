/*
Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() 
and Java's indexOf(). */

#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string haystack;
    string needle;
    cin>>haystack;
    cin>>needle;

    int t = haystack.find(needle);

    if(needle.empty()){
        cout<<0;
    }
    else if(t != string::npos){
        cout<< t;
    }
    else{
        cout<<-1;
    }
    
    return 0;
}


/*
 Leet code solution 
 class Solution {
public:
    int strStr(string haystack, string needle) {
        int t = haystack.find(needle);
        if(t != string::npos){
            return t;
        }
        else{
            return -1;
        }
    }
};
*/
