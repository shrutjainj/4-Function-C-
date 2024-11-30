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
            cur = cur*(i-j)/(j+1);
        }
        cout<<endl;
    }
}
/* Enter number : 5*/
// 1
// 11
// 121
// 1331
// 14641
// 15101051