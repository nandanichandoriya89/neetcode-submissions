class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> prev = {1};

    for(int i=0; i<rowIndex; i++){
        vector<int> current(i+2,1);

        for(int j = 1; j<current.size()-1; j++){
            current[j] = prev[j-1]+prev[j];
        }

        prev = current;
    }

    
return prev;

    }
};