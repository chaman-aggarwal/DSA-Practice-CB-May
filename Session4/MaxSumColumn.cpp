#include <bits/stdc++.h>
using namespace std;
#define N 4

pair<int, int> maxSumCol(int mat[N][N])
{
    int index = -1;
    int maxSum = INT_MIN;

    for(int i=0; i<N; i++)
    {
        int currSum = 0;
        for(int j=0; j<N; j++)
        {
            currSum += mat[j][i];
        }
        if(currSum>maxSum)
        {
            index = i;
            maxSum = currSum;
        }
    }
    pair<int, int> ans;
    ans = make_pair(index, maxSum);

    return ans;
}

int main() {

    int mat[N][N];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            cin>>mat[i][j];
        }
    }

    pair<int, int> res = maxSumCol(mat);

    cout<<"Index "<<res.first+1<<" and sum "<< res.second;

    return 0;
}
