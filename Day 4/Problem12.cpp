/*

input n ;

print 

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1



*/


#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;

    for(int i = 1; i<=n; i++)
    {
        for(int j = n; j>=n-i+1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}