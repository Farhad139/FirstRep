#include<bits/stdc++.h>
using namespace std;
int main(){
    int T,n,i,j;
    long long int fact[100];
    cin>>T;
    for(i=0;i<T;i++){
        fact[i]=1;
    }
    for(i=0;i<T;i++){
        cin>>n;
       for(j=n;j>0;j--){
        fact[i]=fact[i]*j;
       }
       cout<<fact[i]<<endl;
    }
    return 0;

}
