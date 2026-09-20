#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,sum = 0, digit;
    cin>>n;

    while (n>0)
    {
        digit = n%10;

        sum = sum + digit;
        n = n/10;

    }

    cout<<"Sum : "<<sum<<endl;
    return 0;


}