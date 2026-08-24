class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int, int> m; 
        int ans = 0; 
        for(int x : nums){
            if(!m[x]){
                m[x] = m[x-1] + m[x+1] + 1; 
                m[x - m[x-1]] = m[x]; 
                m[x + m[x+1]] = m[x]; 
                ans = max(ans, m[x]); 
            }
        }
        return ans; 
    }
};
