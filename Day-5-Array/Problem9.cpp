/*


Reverse an Array
Input
6
4 9 2 7 1 8

Output
8 1 7 2 9 4
*/

#include<bits/stdc++.h>
using namespace std;

int main ()

{
    int n,a[100];

    cin>>n;

    

    for(int i =0 ; i<n; i++)
    {
        cin>>a[i];
    }

   int left = 0; 
   int right = n-1;

   while (left < right)
   {
        swap(a[left], a[right]);
        left++;
        right--;
   }

   for(int i = 0; i<n; i++)
   {
    cout<<a[i]<<" ";
   }
   return 0;
    

}