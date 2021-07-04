https://leetcode.com/problems/integer-to-roman/

class Solution {
public:
    string intToRoman(int num) {
        
        int numbers[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string romans[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string res;
        
        for(int i=0; i<13; i++)
        {
            while(num >= numbers[i])
            //    58  >=    50  
            //    8   >=    5
            {
                res += romans[i];
                num -= numbers[i];
                
            }
        }
        
        return res;
        
    }
};