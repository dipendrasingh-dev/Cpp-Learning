#include <iostream>
using namespace std;
int factorial(int x){int factorial=1;
    for(int i=2;i<=x;i++){ factorial *= i;} return factorial;}
int combination(int n,int r){int combination=factorial(n)/(factorial(r)*factorial(n-r));return combination;}
int permutation(int n,int r){int permutation=factorial(n)/factorial(n-r);return permutation;}

int main (){
    int n,r;
    cin>>n>>r;
    int nfactorial=factorial(n);
    int rfactorial=factorial(r);
    cout<<combination(n,r)<<endl;
    cout<<permutation(n,r);
}