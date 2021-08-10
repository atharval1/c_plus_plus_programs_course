#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    // print b 5 times using following method .
    string str1(5,'b');
    cout<<str1<<endl;

    //taking string with spaces uing following method
    string str;
    getline(cin,str);
    cout<<str<<endl;

    //two string add or append method 
    string s1="fam";
    string s2="ily";
    // s1.append(s2);
    // cout<<s1<<endl;
    // or
    cout<<s1+s2<<endl;

    // acessing s1 2 char
    cout<<s1[1]<<endl;

    //clear function in c++
    string abc = "jhjfhhdfds dhjghdg hdg hdjgh g";
    abc.clear();
    cout<<abc<<endl;

    //string compare
    string s3 = "abc";
    string s4 = "ab";

    if(s4.compare(s3) == 0){
        cout<<"strings are equal"<<endl;
    }
    else{
        cout<<"not equal"<<endl;
    }

    //checking string is empty or not
    string str2 = "abc";
    str2.clear();
    if(str2.empty()){
        cout<<"string is empty"<<endl;
    }

    // erase function c++
    string str3 = "nincompoop";

    str3.erase(3,2); //delete specific index in string using erase function
    cout<<str3<<endl;

    //find in c++
    string str4 = "atharva";
    cout<<str4.find("rva")<<endl;

    //insert function in c++
    string str5 = "nincompoop";
    str5.insert(2,"lol");
    cout<<str5<<endl;

    //size in c++  // check the length of the string
    cout<<str5.size()<<endl;

    // itration in string 
    for(int i=0;i<str5.size();i++){
        cout<<str5[i]<<" ";
    }
    cout<<endl;

    // taking substring of string

    string ss1 = "nincompoop";
    string ss = ss1.substr(6,4);
    cout<<ss<<endl;

    // string to integer conversion
    string no = "123";
    int x = stoi(no);
    cout<<x+2<<endl; //just adding two  in 123

    //integer to string conversion
    int x1 = 555;
    cout<<to_string(x1) + "1"<<endl; //just concate 555 + 1 == 5551 making string 

    // sort string in c++
    string  a = "dshjhdghagdhadi";
    sort(a.begin(), a.end());

    cout<<a<<endl;

    return 0;
}
