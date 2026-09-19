#include <iostream>
using namespace std;
int main ()
{//fibonacci=>   0,1,1,2,3,5,8,13,21,34,(34+21),((34+21)+34),.....
    //     n=>   0,1,2,3,4,5,6,7 ,8 ,9 ,10     ,11          ,.....   

        int n,a=1,b=1,sum=0;
    cin >>n;
    if(n==1)cout<<1;
    else if (n==2)cout<<1;
    else
   { for (int i =1;i<=n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
    
    }
cout<<sum;}
}