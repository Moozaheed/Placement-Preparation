https://leetcode.com/problems/time-needed-to-inform-all-employees/?envType=study-plan&id=programming-skills-ii

class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
    int time = 0;
    for (int i = 0; i < n; i++) {
        int m = i;
        int t = 0;
        while (m != headID) {
            t += informTime[manager[m]];
            m = manager[m];
        }
        time = max(time, t);
    }
    return time;
    
    }
};