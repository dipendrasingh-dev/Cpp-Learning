#include <iostream>
using namespace std;
    int factorial(int x)
        {
            int factorial=1;
                {
                   for(int i=2;i<=x;i++){ factorial *= i;} return factorial;
                }
        }
    int combination(int n,int r)
        {
            int combination=factorial(n)/(factorial(r)*factorial(n-r));return combination;
        }
int main (){
    int N;
    cin>>N;

    for (int i=0;i<=N;i++)
            {
                for(int j=0;j<=i;j++){
                    
                        cout<<combination(i,j)<<"   ";}
                        cout<<endl;
            }


}