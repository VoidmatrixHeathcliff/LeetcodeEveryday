class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;

        for (auto c : s)
        {
            if (c == '[')
            {
                stk.push(']');
            }
            else if (c == '(')
            {
                stk.push(')');
            }
            else if (c == '{')
            {
                stk.push('}');
            }
            else
            {
                if (stk.empty())
                {
                    return false;
                }
                if (c != stk.top())
                {  
                    return false;
                }
                stk.pop();
            } 

            
        }
        return stk.empty();
    }
};