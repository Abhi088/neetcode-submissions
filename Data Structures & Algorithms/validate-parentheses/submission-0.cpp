class Solution {
private:
    bool isOpen(char ch) {
        return ch == '(' || ch == '{' || ch == '[';
    }
    bool isCounter(char open, char close) {
        if(open == '(' && close == ')') return true;
        if(open == '{' && close == '}') return true;
        if(open == '[' && close == ']') return true;
        return false;
    }
public:
    bool isValid(string s) {
        stack<char> st;
        for(char ch: s) {
            if(isOpen(ch)) st.push(ch);
            else if(!st.empty() && isCounter(st.top(), ch)) st.pop();
            else return false;
        }

        return st.empty();
    }
};
