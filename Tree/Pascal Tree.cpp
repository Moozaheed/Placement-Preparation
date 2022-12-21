class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> gen;
        for(int i=1;i<=numRows;i++)
        {

            vector<int>p;
            if(i==1)
            {
                p.push_back(1);
                gen.push_back(p);
                continue;
            }
            vector<int>copy=gen[i-2];
            for(int j=1;j<=i;j++)
            {
                if(j==1 || j==i)
                {
                    p.push_back(1);
                }
                else
                {
                    int k=copy[j-1]+copy[j-2];
                    p.push_back(k);
                }
            }
            gen.push_back(p);
        }
        return gen;
    }
};