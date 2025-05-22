class Solution {
public:
bool isValid(string s) {
        vector<char> stack;

        for (char c : s){
            if (c == '(' || c == '{' || c == '['){
                stack.push_back(c);
            } else if (stack.empty() || 
            (c == ')' && stack.back() != '(') || (c == ']' && stack.back() != '[') || (c == '}' && stack.back() != '{')){
                return false;
            } else{
                stack.pop_back();
            }
        }

        return stack.empty();
    }
};