/*

Input 
 5
10 20 30 40 50

Output
150

hints: 10 + 20 + 30 + 40 + 50 = 150


*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,arr[100];

    cin>>n;

    // getting input array
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sum = 0;
    for(int i = 0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    cout<<"Sum = "<<sum ;
    return 0;
}