#include <iostream>
#include<stack>
using namespace std;

void revereseSentence(string s){

    stack<string> st;

    for(int i=0;i<s.length();i++){
        string word="";
        while (s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;
        }
        st.push(word);
        
    }

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<endl;
    
}

int main()
{   
    string s="hay, how are you doing?";
    string s1 = "doing the action ";
    revereseSentence(s);
    revereseSentence(s1);
    return 0;
}
