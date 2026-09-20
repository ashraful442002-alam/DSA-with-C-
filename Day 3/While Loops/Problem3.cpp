#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n,i=1,sum=0;
    cin>>n;

    while (i<=n)
    {
        sum = sum + i;
        i++;
    }
    cout<<"Sum : "<<sum<<endl;

    return 0;


}