// https://leetcode.com/problems/range-sum-query-2d-immutable/?envType=study-plan&id=programming-skills-ii

class NumMatrix {
public:
    vector<vector<int>> dp;
    NumMatrix(vector<vector<int>>& matrix) {
        if (matrix.size() == 0) return;
        dp = vector<vector<int>>(matrix.size() + 1, vector<int>(matrix[0].size() + 1, 0));
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[0].size(); j++) {
                dp[i + 1][j + 1] = dp[i][j + 1] + dp[i + 1][j] - dp[i][j] + matrix[i][j];
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        return dp[row2 + 1][col2 + 1] - dp[row1][col2 + 1] - dp[row2 + 1][col1] + dp[row1][col1];
    }
};



//GeeksfoGeeks
//https://www.geeksforgeeks.org/prefix-sum-2d-array/#:~:text=%7D-,void%20prefixSum(int,%7D,-void%20print(int

void prefixSum(int arr[3][3], int n) {
    //vertical prefixsum
    for (int j = 0; j < n; j++) {
        for (int i = 1; i < n; i++) {
            arr[i][j] += arr[i-1][j];
        }
    }
    //horizontal prefixsum
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            arr[i][j] += arr[i][j-1];
        }
    }
}