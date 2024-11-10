#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    stack<int> stk;
    bool isLeftBracket(char char_) {
        if (char_ == '(' || char_ == '{' || char_ == '[')            
            return true;
        else
            return false;
    }
    bool isPair(char char_) {
        // avoid stack.top() error
        if (stk.empty())
            return false;
        switch (char_)
        {
            case ')':
                if (stk.top() == '(') {
                    stk.pop();
                    return true;
                }
                else
                    return false;
            case '}':
                if (stk.top() == '{'){
                    stk.pop();
                    return true;
                }
                else
                    return false;
            case ']':
                if (stk.top() == '['){
                    stk.pop();
                    return true;
                }
                else
                    return false;
            default:
                return false;
        }
    }
    bool isValid(string s) {
        int left_counter = 0;
        int right_counter = 0;
        for (int i = 0; s[i] != '\0'; i++) {
            if (isLeftBracket(s[i])) {
                stk.push(s[i]);
                left_counter++;
            }
            else {
                if (!isPair(s[i]))
                    return false;
                else
                    right_counter++;
            }
        }
        // Take other test samples into account!
        // Avoid inconsistent number of left and right bracket
        if (left_counter == right_counter)
            return true;
        else
            return false;
    }
};

int main(void) {
    Solution so = Solution();
    cout << boolalpha;
    cout << "isVaild(\"()\"): " << so.isValid("()") << endl;
    cout << "isVaild(\"()[]{}\"): " << so.isValid("()[]{}") << endl;
    cout << "isVaild(\"(]\"): " << so.isValid("(]") << endl;
    cout << "isVaild(\"([])\"): " << so.isValid("([])") << endl;
    cout << "isVaild(\"(\"): " << so.isValid("(") << endl;
    cout << "isVaild(\"]\"): " << so.isValid("]") << endl;
    return 0;
}