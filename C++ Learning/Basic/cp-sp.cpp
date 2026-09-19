#include <iostream>
using namespace std;
int main(){
    float x,y;
    cout<<"Enter a cost price:$";
    cin>>x;
    cout<<"Enter a selling price:$";
    cin>>y;
    if(x<y){cout<<"Profit!"<<" of $"<<y-x;}
    if(x>y){cout<<"loss"<<"  of $"<<x-y;}
    if(x==y){cout<<"No profit,No loss LOL";}
}