#include <stack>

class MinStack {
    std::stack<int> st;
    std::stack<int> minSt;

public:
    MinStack() {}
    
    void push(int val) {
        st.push(val);
        val = std::min(minSt.empty() ? val : minSt.top(), val);
        minSt.push(val);
    }
    
    void pop() {
        st.pop();
        minSt.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minSt.top();
    }
};
