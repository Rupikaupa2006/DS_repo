#include<iostream>
using namespace std;
int main(){
    int a[100],n,ele;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>ele;
    int pos=n;
    for(int i=0;i<n;i++){
        if(a[i]>ele){
            pos=i;
            break;
        }
    }
    for(int i=n;i>pos;i--){
        a[i]=a[i-1];
    }
    a[pos]=ele;
    n++;
    cout<<"Array after insertion"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}