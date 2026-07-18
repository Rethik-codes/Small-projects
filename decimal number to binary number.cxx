#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"enter a number"<<endl;
    cin>>num;
    int rem;
    int result =0;
    int pow =1;
    while(num>0)
    {
        rem = num%2;
        result = result + (rem*pow);
        num = num/2;
        pow = pow*10;
    }
    cout<<"the value of dec number in binary system is = "<<result;
}
        