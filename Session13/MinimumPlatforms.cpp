#include <bits/stdc++.h>
using namespace std;

int minPlatforms(int arr[], int dept[], int n)
{
    sort(arr, arr+n);
    sort(dept, dept+n);
    int currPlat = 1;
    int maxPlat = 1;
    int i=1, j=0;
    while(i<n && j<n)
    {
        if(arr[i] < dept[j])
        {
            currPlat++;
            i++;
        }
        else
        {
            currPlat--;
            j++;
        }
        maxPlat = max(maxPlat, currPlat);
    }
    return maxPlat;
}

int main() {
    int arr[] = {900, 940, 950, 1100, 1500, 1800};
    int dept[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arr)/sizeof(int);
    cout<<minPlatforms(arr, dept, n);
    return 0;
}
