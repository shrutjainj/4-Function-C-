// This is function
#include<iostream>
using namespace std;
int fact(int x){
    for(int i=1; i<=x; i++){
        int f = 1;
        f*=i;
    }
    int combination(int n,int r){
        int ncr = fact(n)/(fact(r)*fact(n-r));
        return ncr;
    }
    int main(){
        int n;
        cout<<"enter value of n : ";
        cin>>n;
        int r;
        cout<<"enter value of r : ";
        cin>>r;
        cout<<"combinatioon is"<<combination(n,r);

    }
}