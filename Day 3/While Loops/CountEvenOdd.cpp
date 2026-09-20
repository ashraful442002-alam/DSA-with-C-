//ekta number dewa ache oi number e koita even koita odd
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n;
    cin>>n;

    long long int digit;
    long long int evenCount=0, oddCount=0;
    while (n>0)
    {
        digit = n%10;
        if(digit % 2==0)
        {
            evenCount++;
        }
        else {
            oddCount++; 
        }

        n = n/10;
    }

    cout<<"Even Count: "<<evenCount<<endl;
    cout<<"Odd Count: "<<oddCount<<endl;
    return 0;
}