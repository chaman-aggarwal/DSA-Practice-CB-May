https://hack.codingblocks.com/app/contests/2340/1952/problem

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int target;
    cin>>target;

    int i=0;
    int j=n-1;
    sort(arr, arr+n);
    while(i<j)
    {
        if(arr[i] + arr[j] == target)
        {
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;
            j--;
        }
        else if(arr[i] + arr[j] > target) // 17 > 16
        {
            j--;
        }
        else
        {
            i++;
        }
    }

	return 0;
}