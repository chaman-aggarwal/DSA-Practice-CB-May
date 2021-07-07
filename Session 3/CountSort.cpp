https://hack.codingblocks.com/app/contests/2340/266/problem

#include <iostream>
using namespace std;

void counting_sort(int arr[], int n)
{
    int maxVal = -1;
    for(int i=0; i<n; i++)
    {
        maxVal = max(arr[i], maxVal);
    }
    int freq[maxVal+1] = {0};

    for(int i=0; i<n; i++)
    {
        freq[arr[i]]++;
    }

    int index=0;
    for(int i=0; i<maxVal+1; i++) // iterate through freq array
    {
        while(freq[i]>0)
        {
            arr[index] = i;
            index++;
            freq[i]--;
        }
    }

}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    counting_sort(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<", ";
    }
    return 0;
}
