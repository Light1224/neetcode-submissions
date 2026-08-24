class Solution {
public:

    string encode(vector<string>& strs) {
        if(strs.empty()) return "";
        vector<int> sz;
        string ans; 

        for(auto& s : strs) sz.push_back(s.size()); 
        for(int x : sz){
            ans.append(to_string(x)); 
            ans.push_back(','); 
        }
        ans.push_back('#'); 
        for(auto& x : strs) ans.append(x); 
        return ans; 
    }

    vector<string> decode(string s) {
         if (s.empty()) return {};
        vector<int> sizes;
        vector<string> res;
        int i = 0;
        while (s[i] != '#') {
            int j = i;
            while (s[j] != ',') {
                j++;
            }
            sizes.push_back(stoi(s.substr(i, j - i)));
            i = j + 1;
        }
        i++;
        for (int sz : sizes) {
            res.push_back(s.substr(i, sz));
            i += sz;
        }
        return res;
    }
};
