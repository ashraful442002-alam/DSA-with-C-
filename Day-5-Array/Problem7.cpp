/*

# Find the index of Maximum

Input 
12 45 7 89 34 20

Output 

Index = 3 -> for 89

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

    int maxVal = arr[0];
    int maxIndex = 0;

    for(int i = 1; i<n; i++)
    {
        if(arr[i] > maxVal)
        {
            maxVal = arr[i];
            maxIndex = i;
        }
    }
    cout<<"Index : "<<maxIndex;

    return 0;
}