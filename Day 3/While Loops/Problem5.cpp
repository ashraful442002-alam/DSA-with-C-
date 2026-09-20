#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n;
    cin>>n;
    long long int original = n; // Store the original number for comparison

    int digit = 0;
    int reverse = 0;

    while (n>0)
    {
        digit = n %10;
        reverse = reverse * 10 + digit;
        n = n/10;
    }
   
    if(reverse == n )
    {
        cout<<"Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }

    return 0;


}