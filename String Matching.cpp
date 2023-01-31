// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/?envType=study-plan&id=programming-skills-ii

class Solution {
public:
bool matches(int* sMap, int* pMap) {
    for (int i = 0; i < 26; i++) {
        if (sMap[i] != pMap[i]) return false;
    }
    
    return true;
}

    vector<int> findAnagrams(string s, string p) {
        
    vector<int> result;
    int sLen = s.length();
    int pLen = p.length();
    
    if (sLen < pLen) return result;
    
    int sMap[26] = {0};
    int pMap[26] = {0};
    
    for (int i = 0; i < pLen; i++) {
        pMap[p[i] - 'a']++;
    }
    
    for (int i = 0; i <= sLen - pLen; i++) {

        for (int j = 0; j < 26; j++) {
            sMap[j] = 0;
        }
        
        for (int j = 0; j < pLen; j++) {
            sMap[s[i + j] - 'a']++;
        }
        
        if (matches(sMap, pMap)) {
            result.push_back(i);
        }
    }
    
    return result;
    }
};