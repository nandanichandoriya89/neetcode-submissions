class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        
        vector<int> ans;

        for(int i=0; i<k; i++){
            int maxFreq = 0;
            int maxElement = 0;

            for(auto const&[key,val]: mpp){
                if (val>maxFreq){
                    maxFreq = val;
                    maxElement = key;
                }

            }
            ans.push_back(maxElement);
            mpp[maxElement] = 0;
        }
             return {ans};
    }
};
