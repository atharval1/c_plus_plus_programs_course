#include <iostream>
using namespace std;
#define n 100
class stack{

    int* a;
    int top;

    public:
        stack(){
            a= new int[n];
            top=-1;
        }

        void push(int x){
            if(top==n-1){
                cout<<"Stack verflow "<<endl;
                return;
            }
            top++;
            a[top]=x;
        }

        void pop(){

            if(top==-1){
                cout<<"No element to pop"<<endl;
                return;
            }

            top--;
        }

        int Top(){
            if(top==-1){
                cout<<"No element to stack"<<endl;
                return-1;
            }
           return a[top]; 
        }

        bool empty(){
            return top==-1;
        }
};


int main()
{
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    return 0;
}
