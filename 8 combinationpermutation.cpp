// this is not function
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    int r;
    cout<<"Enter value of r ";
    cin>>r;
    int nfact = 1;
    for(int i=1; i<=n; i++){
        nfact*=i;
    }
    int rfact = 1;
    for(int j=1; j<=r; j++){
        rfact*=j;
    }
    int nrfact = 1; // nrfact is for (n-r)
    for(int k=1; k<=(n-r); k++){
        nrfact *=k;
    }
    int combination=nfact/(rfact*nrfact); // Here fact is n!
    cout<<"combination is : "<<combination;// this fact is real factorial
    return 0;
}
/*Enter value of n 7
Enter value of r 5*/
// combination is 21