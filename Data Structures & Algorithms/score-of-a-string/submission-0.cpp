class Solution {
public:
    int scoreOfString(string s) {
        vector<int> ascii;
        int score = 0;
        for (char x : s){
           ascii.push_back(int(x));
        }

        for (int i=1 ; i< ascii.size(); i++){
           score = score + abs(ascii[i]-ascii[i-1]);
        }

        return score;
    }
};