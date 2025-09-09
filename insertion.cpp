#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n;
    int ele,pos;
    cin>>n;
    int a[n+1];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"array before insertion"<<endl;
    cout<<a[i]<<endl;
    cin>>ele>>pos;
    for(i=n-1;i>=pos;i--){
        a[i+1]=a[i];
    }
    a[pos]=ele;
    n=n+1;
    for(i=0;i<n;i++){
        cout<<"Array after insertion"<<endl;
        cout<<a[i]<<"";
    } 
    cout<<"Array after deletion"<<endl;
    for(i=pos;i<n;i++){
        a[i]=a[i+1];
    }
    for(i=0;i<=n;i++){
        cout<<a[i]<<endl;
    }
    }