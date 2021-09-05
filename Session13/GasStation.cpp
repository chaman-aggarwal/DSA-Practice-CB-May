https://leetcode.com/problems/gas-station/

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    
        int n = gas.size();
        int currGas = 0;
        int totalGas = 0;
        int startIndex = 0;
        
        for(int i=0; i<n; i++)
        {
            currGas += gas[i] - cost[i];
            totalGas += gas[i] - cost[i];
            
            if(currGas < 0)
            {
                startIndex= i+1;
                currGas = 0;
            }
        }
        
        return totalGas >= 0 ? startIndex : -1;
        
    }
};
