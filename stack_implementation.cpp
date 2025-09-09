#include <iostream>
using namespace std;

 const int size=100;
int s[size];
int top=-1;

void push(int value){
    if(top>=size-1){
        cout<<"Stack overflow"<<endl;
    }else{
        top++;
        s[top]=value;
    }
}
void pop(){
    if(top=-1){
        cout<<"Stack undeflow"<<endl;
    }else{
        top--;
    }
}
int peek(){
    if(top=-1){
        cout<<"Stack is Empty"<<endl;
    }else{
        for(int i=top;i>=0;i--){
            cout<<s[i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    push(20);
    push(40);
    push(60);
    cout<<"Top element:"<<peek()<<endl;
    pop();

    return 0;
}