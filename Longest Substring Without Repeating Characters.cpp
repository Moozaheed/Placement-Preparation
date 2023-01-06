class Solution {
public:

    int lengthOfLongestSubstring(string s) {
        map<char, int> seen;
        int mx_len = 0;

        int start = 0;
    
        for(int end = 0; end < s.length(); end++)
        {
            if (seen.find(s[end]) != seen.end())
            {
                start = max(start, seen[s[end]] + 1);
            }
            seen[s[end]] = end;
            mx_len = max(mx_len, end - start + 1);
        }
        return mx_len;
    }
};