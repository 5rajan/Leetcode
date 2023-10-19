class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string op1, op2;
        for(int i = 0; i< s.length(); i++) {
            if(s[i] == '#') {
                if(!op1.empty()) op1.pop_back();
            }
            else op1 += s[i];
        }
        for(int i = 0; i< t.length(); i++) {
            if(t[i] == '#') {
                if(!op2.empty()) op2.pop_back();
            }
            else op2 += t[i];
        }
        return op1 == op2;
    }
};