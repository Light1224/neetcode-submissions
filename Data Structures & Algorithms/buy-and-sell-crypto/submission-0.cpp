class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn = 101;
        int ans = 0;
        for(int x : prices){
            ans = max(ans, x - mn); 
            mn = min(mn, x); 
        }
        return ans; 

    }
};
