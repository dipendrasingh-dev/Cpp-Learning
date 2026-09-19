#include <iostream>
using namespace std;
int main(){
    int n,lastdigit =0,r=0;
    cin>>n;
    while(n>0){
    lastdigit =n%10;
     r*=10;
    r+=lastdigit;
    n/=10;
}
cout<<r;
}