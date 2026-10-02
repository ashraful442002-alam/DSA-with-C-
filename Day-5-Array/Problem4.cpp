/*

Input 
7
34 12 89 5 67 23 10

Output
Minnimum : 5

*/

#include<bits/stdc++.h>
using namespace std;

int main ()

{
    int n,arr[100];
    cin>>n;

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int min = arr[0];

    for(int i = 1; i<n; i++)
    {
        if(arr[i] < min )
        {
            min = arr[i];
        }
    }
    cout<<"Minimum : "<<min;

    return 0;
}