class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> f; 
        int n = s.size(); 
        int ans = 0; 
        int l = 0;
        int mxf = 0; 
        for(int r = 0; r < n; r++){
            f[s[r]]++; 
            mxf = max(mxf, f[s[r]]); 
            while((r-l+1) - mxf > k){
                f[s[l]]--; 
                l++; 
            }
            ans = max(ans, r -l + 1); 
        }
        return ans; 
    }
};
