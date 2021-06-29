#include <iostream>

using namespace std;

int main()
{
   int a = 10;
   int *ptr;
   ptr =&a;
   
   cout<<ptr<<endl;
   cout<<&a<<endl;
   cout<<*ptr<<endl;
   *ptr = 20;
   cout<<a<<endl;//value updated
   
   ptr++;
    cout<<*ptr<<endl;
    
    int arr[] = {10,20,30};
    cout<<"array .."<<*arr<<endl;
    
    int *pointer = arr;
    for(int i=0;i<3;i++){
        cout<<"array element "<<*pointer<<endl;
        pointer++;
    }
    
    //anather method
    
    for(int i=0;i<3;i++){
        cout<<"special array element "<<*(arr+i)<<endl;
    }

    return 0;
}
