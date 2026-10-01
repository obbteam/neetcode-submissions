class Solution {
public:
    void btPar(int n, std::string prev, int open, int close, vector<string> &res) {
        if (open < close || open > n || close > n) return;
        if (prev.length() == 2*n) res.push_back(prev);

        btPar(n, prev + "(", open + 1, close, res);
        btPar(n, prev + ")", open, close + 1, res);
    }

    vector<string> generateParenthesis(int n) {
        std::vector<string> res;
        btPar(n, "(", 1, 0, res);
        return res;
    }
};
