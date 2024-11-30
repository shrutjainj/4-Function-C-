#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<" Enter number of row : ";
    cin>>n;
    for(int k=1; k<=4; k++){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    return 0;
}
/*Enter numer of row : 5*/
// *
// **
// ***
// ****
// *****
// *
// **
// ***
// ****
// *****
// *
// **
// ***
// ****
// *****
// *
// **
// ***
// ****
// *****
