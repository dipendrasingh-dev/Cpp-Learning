#include <iostream>
using namespace std;
int main ()
{
    int n,a;
    cin>>n;
    for (int i =1;i<=n;i++)
 {
    if (i%2==0)a=1;
    else a=0;
    cout <<a;
    for (int j=1;j<=i;j++)
       {
         if (a==1)a=0;
         else a=1;
            cout<<a;
       }

        cout<<endl;
 }

}