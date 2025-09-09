#include<iostream>
using namespace std;
int main(){
    int a1[100],a2[100],c[200];
    int n1,n2;

    cout<<"enter no of elements in first sorted array"<<endl;
    cin>>n1;
    cout<<"enter elements in first array"<<endl;
    for(int i=0;i<n1;i++){
        cin>>a1[i];
    }
    cout<<"enter the no of elements in second sorted array"<<endl;
    cin>>n2;
    cout<<"enter elements in second array"<<endl;
    for(int i=0;i<n2;i++){
        cin>>a2[i];
    }
    int i=0,j=0,k=0;
    while(i<n1&& j<n2){
        if(a1[i]<a2[j]){
            c[k++]=a1[i++];
        }else{
            c[k++]=a2[j++];
        }
    }
    while(i<n1){
        c[k++]=a1[i++];
    }
    while(j<n2){
        c[k++]=a2[j++];
    }
 cout<<"merged sorted array"<<endl;
 for(int x=0;x<k;x++){
    cout<<c[x]<<" ";
 }
 return 0;
}