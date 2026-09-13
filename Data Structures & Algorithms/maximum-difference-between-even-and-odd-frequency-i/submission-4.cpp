class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        for(int i=0; i<s.size(); i++){
            mp[s[i]]++;
        }
        int maxOdd = 0;
        int minEven = INT_MAX;

        for(auto it:mp){
            if(it.second%2==0){
                minEven = min(minEven,it.second);
            }
            else{
                maxOdd = max(maxOdd,it.second);
            }
        }
        

        return maxOdd-minEven;
    }
};