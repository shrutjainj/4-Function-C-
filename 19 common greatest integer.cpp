#include<iostream>
using namespace std;
int gcd(int a, int b)
{
    int hcf = 1 ;
    for(int i=min(a,b);i>=1;i--){
        if(a%i==0 && b%i==0){
            hcf = i;
        }
    }
    return hcf;
} 
int main(){
    int a,b;
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter value of b: ";
    cin>>b;
    cout<<gcd(a,b);
}