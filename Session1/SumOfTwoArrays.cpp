https://hack.codingblocks.com/app/contests/2340/931/problem

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr1[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0; i<m; i++)
    {
        cin>>arr2[i];
    }

    int size = max(n, m);
    int ans[size];
    int carry = 0, value;
    int i=n-1, j=m-1, k=size-1;

    while(k>=0)
    {
        value = carry;
        if(i>=0)
        {
            value += arr1[i];
        }
        if(j>=0)
        {
            value += arr2[j];
        }
        carry = value/10;
        value = value%10;
        ans[k] = value;
        i--;
        j--;
        k--;
    }

    if(carry!=0)
    {
        cout<<carry<<", ";
    }
    for(int i=0; i<size; i++)
    {
        cout<<ans[i]<<", ";
    }

    return 0;
}