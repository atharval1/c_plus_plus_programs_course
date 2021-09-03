#include <iostream>
using namespace std;
int main()
{
    string str1 = "hay c is good languages";
    string str2 = "and c++";
    
    str1.replace(6,2,str2);
    
    cout<<str1;

    return 0;
}
