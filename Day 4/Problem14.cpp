/*


input = n;

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5


*/

/*

input n ;

print 

5
5 4
5 4 3
5 4 3 2
5 4 3 2 1



*/

#include<bits/stdc++.h>
using namespace std;

int main ()

{
    int n;
    cin>>n;
    
    for(int i =1; i<=n; i++)
    {
        for(int j =1; j<=i; j++)
        {
            cout<<i+j-1<<" ";
            
            
        }
        
        cout<<endl;
        
    }
    return 0;
}