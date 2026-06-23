#include<iostream>
using namespace std;
int main()
{
    string word;
    string reverse = "";
    cout<<"enter a word "<<endl;
    cin>>word;
    for(int i = word.length() - 1 ; i>=0 ; i-- )
    {
        reverse =reverse + word[i] ;
    }
    if(reverse == word)
    {
        cout<<"it is palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}