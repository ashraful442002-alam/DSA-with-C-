// ekta number dewa ache oita tek largest digit ber kora

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n;
    cin>>n;

    int min;

    while (n>0)
    {
        int digit = n%10;

        if(digit<min)
        {
            min = digit;
        }

        n = n/10;
    }

    cout<<"Smallest digit : "<<min;

    return 0;
}