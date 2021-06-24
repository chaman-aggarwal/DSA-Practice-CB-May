https://hack.codingblocks.com/app/contests/2340/1363/problem

#include <bits/stdc++.h>
using namespace std;

int RainWaterTrapping(int arr[], int n)
{
    int left[n];
    int right[n];
    left[0] = arr[0];
    for(int i=1; i<n; i++)
    {
        left[i] = max(arr[i], left[i-1]);
    }
    right[n-1] = arr[n-1];
    for(int i=n-2; i>=0; i--)
    {
        right[i] = max(arr[i], right[i+1]);
    }

    int ans = 0;
    for(int i=1; i<n-1; i++)
    {
        ans += min(left[i], right[i]) - arr[i];
    }

    return ans;

}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cout<<RainWaterTrapping(arr, n);
    return 0;
}