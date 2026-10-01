class Solution {
public:

    string encode(vector<string>& strs) {
        string res;
        
        for (auto s: strs) {
            res+=to_string(s.length());
            res+=delimiter;
            res+=s;
        }

        return res;
    }

    vector<string> decode(string s) {
        if (s.length() == 0) return {};
        int num = 0;
        string cur;
        bool readingWord = false;

        vector<string> res;
        for (char c : s) {
            if (c == delimiter && !readingWord) {
                num = stoi(cur);
                cur = "";
                readingWord = true;
                continue;
            }

            if (readingWord && num == 0) {
                res.emplace_back(cur);
                readingWord = false;
                cur = "";
            }

            if (readingWord) {
                num--;
            }

            cur+=c;
        }
        res.emplace_back(cur);

        return res;
    }
private:
    char delimiter = '#';
};
