class Solution {
    public:

        string encode(vector<string>& strs) {
                string result = "";

                        for (string str : strs) {
                                    result += to_string(str.length()) + "#" + str;
                                            }

                                                    return result;
                                                        }

                                                            vector<string> decode(string s) {
                                                                    vector<string> result;

                                                                            int i = 0;

                                                                                    while (i < s.length()) {

                                                                                                int j = i;

                                                                                                            // Find '#'
                                                                                                                        while (s[j] != '#') {
                                                                                                                                        j++;
                                                                                                                                                    }

                                                                                                                                                                // Get length of the string
                                                                                                                                                                            int len = stoi(s.substr(i, j - i));

                                                                                                                                                                                        // Move after '#'
                                                                                                                                                                                                    j++;

                                                                                                                                                                                                                // Extract the actual string
                                                                                                                                                                                                                            result.push_back(s.substr(j, len));

                                                                                                                                                                                                                                        // Move to the beginning of next encoded string
                                                                                                                                                                                                                                                    i = j + len;
                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                    return result;
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                        };
