class Solution {
public:
    string multiply(string num1, string num2) {
        int m = num1.size(), n = num2.size();
        vector<int>pos(m+n,0);
        string res;
        for (int i = m - 1; i >= 0; i--) 
        {
            for (int j = n - 1; j >= 0; j--) 
            {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j, p2 = i + j + 1;
                int sum = mul + pos[p2];
                pos[p1] += sum / 10;
                pos[p2] = sum % 10;
            }
        }
        for (int i = 0; i < m + n; i++) 
        {
            if (!(res.size() == 0 && pos[i] == 0)) 
            {
                res += to_string(pos[i]);
            }
        }
        return res.size() == 0 ? "0" : res;
    }
};