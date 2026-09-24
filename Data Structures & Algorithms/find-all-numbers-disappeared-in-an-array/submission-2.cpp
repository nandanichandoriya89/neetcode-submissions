class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> temp;

        for(int i=1; i<=nums.size(); i++){
            bool found = false;
             for(int j=0; j<nums.size(); j++){
                if(i==nums[j]){
                   found = true;
                   break;
                }
             }
             if(!found){
                temp.insert(i);
             }
        }
        vector<int> v(temp.begin(), temp.end());
        return v;
    }
};