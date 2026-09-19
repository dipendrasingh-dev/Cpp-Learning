#include <iostream>
using namespace std;
int main ()
 {
    float a,c;
    char op;
    cin>>a>>op>>c;
    switch (op)
     {
        case '+': 
         cout <<a+c;
         break;
        case '-':
         cout <<a-c;
         break;
        case '*': case 'x':
         cout<<a*c;
         break;
        case '/':
         cout<<a/c;
         break;
     }
}