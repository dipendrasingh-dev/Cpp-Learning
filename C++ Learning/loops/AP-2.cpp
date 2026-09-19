#include <iostream>
using namespace std;
int main()
{
    int a,d,n;
    
    cout<<"First term: ";
    cin >> a;
    cout<<"Comman difference: ";
    cin >> d;
    // 
        if (d<0)
        {for(int i=1;a>0;i++)
                {
                cout<<a<<endl;
                     a=a+d;
                }
        }
        else {
                 
            cout<<"Number of terms: ";
                cin>>n;
            for(int i=1;i<=n;i++)
                {
                cout<<a<<endl;
                     a=a+d;
                }
            //    cout<<"comman difference must be in negavive";
             }

}