#include <bits/stdc++.h>
using namespace std;

int makeChange(int coins[], int n, int money)
{
    int count=0;
    while(money>0)
    {
        // 38 ==> 20 (index)
        int idx = upper_bound(coins, coins+n, money)-1-coins;
        // cout<<coins[idx]<<" ";
        money -= coins[idx];
        count++;
    }
    cout<<endl;
    return count;
}

int main() {
    int money;
    cin>>money;
    int coins[] = {1,2,5,10,20,50,100,200,500,2000};
    int t = sizeof(coins)/sizeof(int);
    cout<<"Coins needed "<<makeChange(coins, t, money);
   return 0;
}
