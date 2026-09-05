class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];  // pehli string as reference
        
        for(int i = 1; i < strs.size(); i++) {
            // jab tak prefix match nahi karta
            while(strs[i].find(prefix) != 0) {
                prefix = prefix.substr(0, prefix.length() - 1);
                if(prefix.empty()) return "";
            }
        }
        
        return prefix;
    }
};

