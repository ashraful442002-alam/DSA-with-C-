/*

Input 
8
12 7 4 15 20 9 6 11

Output 

Even Count : 4

*/

#include<bits/stdc++.h>
using namespace std;


int main ()

{
    int n,a[100];
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        cin>>a[i];

    }

    int count = 0;

    for(int i = 0; i<n; i++)
    {
        if(a[i] % 2 == 0)
        {
            count = count + 1;
        }
    }
    cout<<"Even Count : "<<count;

    return 0;
}