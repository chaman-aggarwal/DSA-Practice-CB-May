https://hack.codingblocks.com/app/contests/2340/1068/problem

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        int curr = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>curr)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = curr;
    }
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
    insertion_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}