#include <iostream>
using namespace std;    
int main ()
{
float a,c;
char b;
cin>>a>>b>>c;

if (b=='+')cout<<a+c;
if (b=='-') cout<<a-c;
if (b=='*' || b=='x') cout<<a*c;
if (b=='/') cout<<a/c; 
//default: {cout <<"wtf";}
}