class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int current_count = 0;
        int maxCon = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=1){
                current_count=0;
                
            }
           if(nums[i]==1){
                 current_count++;
           }
           if(maxCon<current_count){
            maxCon = current_count;
           }

        }
        return maxCon;
    }
};