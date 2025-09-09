#include <bits/stdc++.h>
using namespace std;
int main() {
    int i,n,sum,missing,Nsum;
    cin>>n;
    int a[n];
    Nsum=n*(n+1)/2;
    for (i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    if(Nsum!=sum){
        missing=Nsum-sum;
    }
    cout<<missing<<endl;
    return 0;
}
