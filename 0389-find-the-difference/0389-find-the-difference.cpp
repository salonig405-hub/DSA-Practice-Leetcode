class Solution {
public:
    char findTheDifference(string s, string t) {
        for (int i = 0; i < t.size(); i++) {
            bool found = false;

            for (int j = 0; j < s.size(); j++) {
                if (t[i] == s[j]) {
                    s[j] = ' ';  
                    found = true;
                    break;
                }
            }

            if (!found) {
                return t[i];
            }
        }

        return ' ';
    }
};