class Solution {
public:
    bool isOperator(std::string& t) {
        return t == "+" || t == "-" || t == "*" || t == "/";
    }

    int oper(std::string& t, int& l, int &r) {
        if (t == "+") return l + r;
        if (t == "-") return l - r;
        if (t == "*") return l * r;
        return l / r;
    }

    int evalRPN(vector<string>& tokens) {
        std::stack<int> nums;

        for (auto t : tokens) {
            if (isOperator(t)) {
                int right = nums.top(); nums.pop();
                int left = nums.top(); nums.pop();

                nums.push(oper(t, left, right));
            } else {
                nums.push(stoi(t));
            }
        }

        return nums.top();
    }
};
