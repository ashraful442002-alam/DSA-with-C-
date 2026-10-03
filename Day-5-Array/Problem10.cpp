/*


Array is Palindrom or Not

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

    int left = 0, right = n-1;
    bool isPalindrome = true;
    while(left < right)
    {

        if(a[left] != a[right])
        {
            isPalindrome = false;
            break;

        }
        left++;
        right--;
    }
    if(isPalindrome)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }

    return 0;
}