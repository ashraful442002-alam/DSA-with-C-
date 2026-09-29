/*


input 
6
12 45 7 89 34 20

output
89

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


    int max = arr[0];
    for(int i = 1; i<n; i++)
    {
        if(arr[i] > max ){
            max = arr[i];
        }
     
        
    }
    cout<<"Max : "<<max;
    return 0;
}