class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = 9;
        vector<unordered_set<char>> rows(n);
        vector<unordered_set<char>> cols(n);
        vector<unordered_set<char>> squares(n);

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                auto cur = board[i][j];
                if (cur == '.') continue;

                int idx = (i / 3) * 3 + (j / 3);
                if (rows[i].count(cur) || cols[j].count(cur) || squares[idx].count(cur)) return false;
                rows[i].insert(cur);
                cols[j].insert(cur);
                squares[idx].insert(cur);
            }
        }
        return true;
    }
};
