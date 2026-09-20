#include<bits/stdc++.h>
using namespace std;


int main ()
{
    int a,b,c,max,min;

    cin>>a>>b>>c;


    if(a>b && a>c)
    {
        if(b>c)
        {
            max = a;
            min = c;
        }
        else
        {
            max = a;
            min = b;
        }
        cout<<max;
    }
    else if(b>a && b>c)
    {
        if(a>c)
        {
            max = b;
            min = c;
        }
        else
        {
            max = b;
            min = a;
        }
        cout<<max;
    }
    else if(c>a && c>b)
    {
        if(a>b)
        {
            max = c;
            min = b;
        }
        else
        {
            max = c;
            min = a;
        }
        cout<<max;
    }
}