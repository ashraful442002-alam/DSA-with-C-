//give n number and print multiplication table of n

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,mul;

    cin>>n;

    for(int i = 1 ; i<= 10; i++)
    {
        mul = n*i;
        cout<<n<<" * "<<i<<" = "<<mul<<endl;
    }

    return 0;
}