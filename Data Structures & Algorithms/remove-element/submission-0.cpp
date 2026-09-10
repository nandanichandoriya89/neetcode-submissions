class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int size = nums.size();
        // int count = 0;
        // int index = 0;
        // sort(nums.begin(), nums.end());
        // for(int i=0; i<size; i++){
        //     if(nums[i]==val){
        //         index = i;
        //       count++;
        //     }

        // }

        // for(int i=(index-count)+1; ; i++ ){
        //     nums[i] = nums[i+count];
        // }
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
    
};