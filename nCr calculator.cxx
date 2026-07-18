#include<iostream>
using namespace std;
int factorial(int n)
{
    int  factorial = 1;
    for(int i = 1; i<= n ; i++)
    {
        factorial =factorial * i ;
    }
    return factorial;
}
int result(int n  , int r)
{
   int factn = factorial(n);
   int factr = factorial(r);
   int factnr = factorial(n-r);
   return factn/(factr * factnr);
}
int main()
{
    cout<<result(8 , 2);
}