class Solution {
    bool check(char c){
        return (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z' || c >= '0' && c <= '9');
    }
public:
    bool isPalindrome(string s) {
        int l = 0; 
        int r = s.size() - 1; 
        while(l < r){
            while(l < r && !check(s[l])) l++; 
            while(l < r && !check(s[r])) r--; 
            if(tolower(s[l]) != tolower(s[r])) return false; 
            l++; 
            r--; 
        }
        return true; 
    }
};
