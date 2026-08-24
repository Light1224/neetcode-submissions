class Solution {
    static bool cmp(pair<int,int> &a,pair<int,int> &b ){
        return a.second > b.second; 
    }
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m; 
        int n = nums.size();
        for(int i = 0; i < n; i++){
            int x = nums[i]; 
            m[x]++; 
        }
        vector<pair<int,int>> f(m.begin(), m.end()); 
        sort(f.begin(), f.end(), cmp); 
        vector<int> ans; 
        for(int i = 0 ; i < k; i++) ans.push_back(f[i].first); 
        return ans; 
    }
};
