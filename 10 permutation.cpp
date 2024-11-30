#include<iostream>
using namespace std;
int fact(int x)
{
    for(int i=1; i<=x; i++){
        fact*=x;
    }
}
int permutation(int n,int r)
{
    int ncp = fact(n)/fact(n-r);
    return ncp;
}
int main()
{
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int r;
    cout<<"Enter value of r ";
    cin>>r;
    int ncp = permutation(n,r);
    cout<<ncp;
}
/* Enter value of n 8
Enter value of r 5 */
//2
