class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
       
        vector<string> ans;
        for(int i=0; i<arr.size(); i++){
             bool found = false;
            for(int j=0; j<arr.size(); j++){
                if(i!=j && arr[i]==arr[j]){
                    found = true;
                    break;
                }
            }
            if(!found){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()<k){
            return "";
        }
        return ans[k-1];
    }
};