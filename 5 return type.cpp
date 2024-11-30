#include<iostream>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int main(){
    cout<<sum(4,6)<<endl;
    cout<<sum(10,2);
    int x,y;
    cout<<"Enter value ";
    cin>>x;
    cout<<"Enter value ";
    cin>>y; // after taking new value old value of x,y will not take
    cout<<min(x,y); //minimum(min) is built-in function
    cout<<max(x,y);
}
//10
//12
/*Enter value 5
Enter value 7*/
// 5
// 7