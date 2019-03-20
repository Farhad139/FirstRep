#include<iostream>

using namespace std;
int main(){
     int i,j,value,position,size,l,compare;
     cout<<"Enter your array size"<<endl;
     cin>>size;
     cout<<"Enter your array"<<endl;
     string nam[100];
     string ins ="karim";
    for(i=0;i<size;i++){
        cin>>nam[i];
    }

    for(i=size;i>2;i--){
        nam[i]=nam[i-1];
    }

    nam[2]=ins;

        cout<<" The sorted array with insert "<<endl;
        for(i=0;i<size+1;i++){
            cout<<nam[i]<<endl;
        }
    return 0;
}


