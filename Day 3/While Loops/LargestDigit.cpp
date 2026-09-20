// ekta number dewa ache oita tek largest digit ber kora

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n;
    cin>>n;

    int max =0;

    while (n>0)
    {
        int digit = n%10;

        if(digit>max)
        {
            max = digit;
        }

        n = n/10;
    }

    cout<<"Largest digit: "<<max;

    return 0;
}