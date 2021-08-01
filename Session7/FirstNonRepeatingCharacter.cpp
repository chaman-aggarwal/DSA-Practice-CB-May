https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#

string FirstNonRepeating(string A){
		    // Code here
		    
        string ans="";
        queue<char> q;
        int freq[26] = {0};
        
        for(int i=0; i<A.size(); i++)
        {
            // insertions
            q.push(A[i]);
            freq[A[i]-'a']++;
            
            // query
            while(!q.empty())
            {
                if(freq[q.front()-'a'] > 1)
                {
                    q.pop();
                }
                else
                {
                    break;
                }
            }
            
            if(q.empty())
            {
                ans += '#';
            }
            else
            {
                ans += q.front();
            }
            
        }
        
        return ans;