//given n number and calculate sum


#include<bits/stdc++.h>
using namespace std;

int main ()
{
    long long int n;

    cin>>n;

    long long sum = 0;

    for(int i = 1; i<=n; i++)
    {
        sum = sum + i;
        
    }
    cout<<"Sum: "<<sum<<endl;
    return 0;
}