#include<iostream>
using namespace std;
void loop()
{
    int n = 5;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
               cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int a=2;
    for(int k=1; k<=a; k++){
        cout<<loop();
    }
    return 0;
}
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