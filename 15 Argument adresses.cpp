#include<iostream>
using namespace std;
void fun(int x, int y)
{
    cout<<"address of fun x: "<<&x<<endl;
    cout<<"address of fun y: "<<&y<<endl;
}
int main()
{
    int x=3;
    int y=5;
    cout<<&x<<endl;
    cout<<&y<<endl; 
    fun(x,y);
}
// 0x7ffd83d2a98c
// 0x7ffd83d2a988
// address of fun x: 0x7ffd83d2a96c
// address of fun y: 0x7ffd83d2a968
