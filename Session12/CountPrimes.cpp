https://leetcode.com/problems/count-primes/

class Solution {  
    
    void prime_sieve(vector<bool> &primes, int n)
    {
        // odd numbers as prime
        for(long long int i=3; i<=n; i+=2)
        {
            primes[i] = true;
        }
        
        for(long long int i=3; i*i<=n; i+=2)
        {
            // unmarked
            if(primes[i]==true)
            {
                for(long long int j=i*i; j<=n; j=j+i)
                {
                    primes[j] = false;
                }
            }
        }
        
        primes[2] = true;
        
    }
    
public:
    int countPrimes(int n) {
        
        // 2, 3, 5, 7, 11
        
        if(n==0 || n==1)
        {
            return 0;
        }
        
        vector<bool> primes(n+1, false);
        
        prime_sieve(primes, n);
        
        int count = 0;
        for(long long int i=0; i<n; i++)
        {
            if(primes[i]==true)
            {
                count++;
            }
        }
        
        return count;
    }
};