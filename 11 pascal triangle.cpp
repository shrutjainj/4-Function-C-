#include<iostream>
using namespace std;
int fact(int x)
{
    int f=1;
    for(int a=1; a<=x; a++){
        f*=a;
    }
}
int combination(int n,int r){
    int ncr= fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    int n;
    cout<<"enter number: ";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1;j<=i;j++){
            cout<<comination(i,j)<<" ";
        }
        cout<<endl;
    }
}
/* Enter number: 5*/
// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
