#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=0; i<=n; i++){
        int cur = 1; // cur is current value
        for(int j=0; j<=i; j++){
            cout<<cur;
            cur = cur*((i-j)/(j+1));
            // here using curve bracket 2 times is problem in our answer because [/] wale me 0.5 ya decimal value ko 0 mana jata hai aur 2.9 ko 2 and 5.2 ko 5 and 4.4 ko 4mana jata hai 
        }
        cout<<endl;
    }
}
/*Enter number : 5*/
// 1
// 11
// 120
// 1330
// 14400
// 15101000