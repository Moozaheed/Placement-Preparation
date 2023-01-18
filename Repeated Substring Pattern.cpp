class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int i = 1; i < s.size(); i++) 
        {
            string sub = s.substr(0, i);
            if (s.size() % sub.size() == 0) 
            {
                int mul = s.size() / sub.size();
                string cons = "";
                for (int j = 0; j < mul; j++) cons += sub;
                if (cons == s) return true;
            }
        }
        return false;
    }
    
};