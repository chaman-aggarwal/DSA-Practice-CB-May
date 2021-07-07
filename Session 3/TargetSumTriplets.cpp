https://hack.codingblocks.com/app/contests/2340/195/problem

#include <iostream>
#include <algorithm>
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
    
    sort(arr, arr+n);

    for(int i=0; i<n-2; i++)
    {
        int s = i+1;
        int e = n-1;
        while(s<e)
        {
            if(arr[i]+arr[s]+arr[e]==target)
            {
                cout<<arr[i]<<", "<<arr[s]<<", "<<arr[e]<<endl;
                s++;
                e--;
            }
            else if(arr[i] + arr[s] + arr[e] < target)
            {
                s++;
            }
            else
            {
                e--;
            }
        }
    }

    return 0;
}
