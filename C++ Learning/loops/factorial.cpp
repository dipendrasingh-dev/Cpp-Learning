#include <iostream>
using namespace std;
int main(){
    int sum=1,i=1,n;
    cin>>n;
    while(i<=n){
    sum*=i;
       i++;
    }
cout<<sum;
}