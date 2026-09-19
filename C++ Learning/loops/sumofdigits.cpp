#include <iostream>
using namespace std;
int main(){
    int i,a,sum=0;
    cin>>a;
    while(a>0){
        i=a%10;
        sum+=i;
        a/=10;
    }
       cout<<sum;
}
