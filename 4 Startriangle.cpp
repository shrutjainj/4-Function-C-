#include<iostream>
using namespace std;
void Startriangle(int x)
{
    for(int i=1; i<=x; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    Startriangle(2);
    cout<<endl;
    Startriangle(3);
    cout<<endl;
    Startriangle(4);
    cout<<endl;
    return 0;
}
// *
// **

// *
// **
// ***

// *
// **
// ***
// ****