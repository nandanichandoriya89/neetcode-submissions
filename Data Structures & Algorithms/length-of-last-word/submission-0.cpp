class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> separate_word;
        string word;
        stringstream ss(s);

        while(ss >> word){
            separate_word.push_back(word);
        }

        string lastWord = separate_word[separate_word.size()-1];
        return lastWord.size();

    }
};