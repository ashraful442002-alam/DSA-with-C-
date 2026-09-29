/*

Input
5
10 20 30 40 50

Output
10 20 30 40 50


*/


#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int n,arr[100];

    cin>>n;


    // this loop is for getting Input array
    for(int i =0; i<=n-1; i++)
    {
        cin>>arr[i];
         
    }

    // this loop is for Print output array
    for(int i = 0; i<=n-1; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
   
}