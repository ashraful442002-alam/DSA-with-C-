/*

Input 
8
12 -5 0 7 -9 0 15 -2


Output
Positive : 3
Negative : 3
Zero : 2


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

    int posVal = 0, negVal = 0, zero = 0;

    for(int i = 0; i<n; i++)
    {
        if(a[i] > 0 )
        {
            posVal++;
        }
        else if(a[i] < 0)
        {
            negVal++;

        }
        else
        {

            zero++;
        }
    }
    cout<<"Possitive : "<<posVal<<endl<<"Negative : "<<negVal<<endl<<"Zero : "<<zero;

    return 0;
}