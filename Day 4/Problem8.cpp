/*

input = n

print 

* * * * *
 * * * *
  * * *
   * *
    *

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        // Spaces
        for(int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }

        // Stars
        for(int k = 1; k <= n - i + 1; k++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}