class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        string check = strs[0];
        for(int i=0; i<check.size(); i++){
            for(int j=0; j<strs.size(); j++){
                if (i>=strs[j].size() || check[i]!=strs[j][i]){
                    return ans;
                   
                }
            }
            ans += check[i];
        }
        return ans;
    }
};