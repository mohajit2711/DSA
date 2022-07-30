class Solution {
public:
    bool isValid(string s) {
        stack<char> cStack;
        unordered_map<char, char> left;
        left['('] = ')';
        left['{'] = '}';
        left['['] = ']';
    
        for(char *ch = &s[0]; *ch != '\0'; ch++)
        {
            if(cStack.empty())
            {
                if(left.find(*ch) != left.end())
                    cStack.push(*ch);
                else return false;
            }
            else if(left[cStack.top()] == *ch)
            {
                cStack.pop();
            }
            else if(left.find(*ch) != left.end())
                cStack.push(*ch);
            else return false;
        }
        
        if(!cStack.empty()) return false;
        return true;
    }
};
