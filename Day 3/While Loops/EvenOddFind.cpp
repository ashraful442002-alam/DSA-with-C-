//ekta number dewa ache oi number e konta even konta odd ber kora
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n;

    cin>>n;
    long long int digit;

    while (n>0)
    {
        digit= n %10;
        if(digit%2==0)
        {
            cout<<digit<<"->Even"<<endl;
        }
        else {
            cout<<digit<<"->Odd"<<endl;
        }

        n = n/10;
    }

    return 0;
}