#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    bool x=1;
    for(int i=2;i<=n-1;i++)
    {
         if (n%i==0) {
           x=0;
           break;}
    }
       if (n<0)cout<<n<<" is a negative number \nit is neither prime nor composite number";
       else if(n==0)cout<<0<<" is a whole number \nit is neither prime nor composite number ";
       else if (n==1)cout<<1<<" is neither prime nor composite number";
       else if (x==1) cout<<n<<" is a prime number";
       else cout<<n<<" is a composite number";

}