#include<iostream>
using namespace std;
void fun(int x, int y){
    cout<<x<<" "<<y;
}
int main()
{
    int x=3;
    int y = 5;
    fun(x,y); // if value is not assigned to x, y then it will give error
}
// 3 5