/*

# Find the index of Minimum

Input 
12 45 7 89 34 20

Output 

Index = 2 -> for 7

*/

#include<bits/stdc++.h>
using namespace std;

int main ()

{
    int n, arr[100];

    cin>>n;

    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int minVal = arr[0];
    int minIndex = 0;

    for(int i = 1; i<n; i++)
    {
        if(arr[i] < minVal)
        {
            minVal = arr[i];
            minIndex = i;
        }
    }
    cout<<"Index : "<<minIndex;

    return 0;
}