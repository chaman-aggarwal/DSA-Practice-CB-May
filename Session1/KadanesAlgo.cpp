https://hack.codingblocks.com/app/contests/2340/1997/problem

#include <bits/stdc++.h>
using namespace std;

int KadanesAlgo(int arr[], int n)
{
    int curr_sum = 0;
    int max_sum = INT_MIN;

    for(int i=0; i<n; i++)
    {
        curr_sum += arr[i];
        max_sum = max(curr_sum, max_sum); 

        if(curr_sum < 0)
        {
            curr_sum = 0;
        }

    }

    return max_sum;

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
    cout<<KadanesAlgo(arr, n);
    return 0;
}