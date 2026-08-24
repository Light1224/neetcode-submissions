class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> m; 
        int n = nums.size(); 
        vector<int> ans; 
        for(int i = 0; i < n; i++){
            int x = nums[i]; 
            if(m.find(target - x) != m.end()){
                ans.push_back(m[target-x]); 
                ans.push_back(i); 
                break; 
            }
            m[x] = i; 
        }
        return ans; 
    }
};
