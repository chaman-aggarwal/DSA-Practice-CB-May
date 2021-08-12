https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

long long minCost(long long arr[], long long n) {
        // Your code here
        long long cost = 0;
        
        priority_queue<long, vector<long>, greater<long>> pq(arr, arr+n);
        
        while(pq.size() > 1)
        {
            long A = pq.top();
            pq.pop();
            long B = pq.top();
            pq.pop();
            
            cost += A+B;
            
            pq.push(A+B);
        }
        
        return cost;

    }