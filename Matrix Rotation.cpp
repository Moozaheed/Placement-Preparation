//https://leetcode.com/problems/determine-whether-matrix-can-be-obtained-by-rotation/description/?envType=study-plan&id=programming-skills-ii

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    if (mat.size() != target.size()) return false;
    
    int n = mat.size();
    
    vector<vector<vector<int>>> allRotations;
    allRotations.push_back(mat);
    
    vector<vector<int>> temp = mat;
    for(int i = 0; i < 3; i++) 
    {
        vector<vector<int>> rotated = temp;
        for (int x = 0; x < n / 2; x++) 
        {
            for (int y = x; y < n - x - 1; y++) 
            {
                int temp = rotated[x][y];
                rotated[x][y] = rotated[y][n - 1 - x];
                rotated[y][n - 1 - x] = rotated[n - 1 - x][n - 1 - y];
                rotated[n - 1 - x][n - 1 - y] = rotated[n - 1 - y][x];
                rotated[n - 1 - y][x] = temp;
            }
        }
        allRotations.push_back(rotated);
        temp = rotated;
    }
    
    for (int i = 0; i < allRotations.size(); i++) 
    {
        if (allRotations[i] == target) 
            return true;
    }
    return false;

    }
};