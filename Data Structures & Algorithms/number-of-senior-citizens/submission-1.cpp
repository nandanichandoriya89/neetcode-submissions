class Solution {
public:
    int countSeniors(vector<string>& details) {
         int count = 0;

        for (string ticket : details) {
            int age = (ticket[11] - '0') * 10 + (ticket[12] - '0');

            if (age > 60) {
                count++;
            }
        }

        return count;
    }
};