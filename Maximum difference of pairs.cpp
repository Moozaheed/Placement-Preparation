
https://www.geeksforgeeks.org/maximum-difference-between-two-elements/



class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
    int mx=0;
      
    int min_ele = prices[0];
    for(int i = 0; i < prices.size(); i++)
     {    
       if (prices[i] - min_ele > mx)                            
       mx = prices[i] - min_ele;
        
       if (prices[i] < min_ele)
       min_ele = prices[i];                    
     }
      
     return mx;
    }
};