// https://www.youtube.com/watch?v=XmSOWnL6T_I
//https://leetcode.com/problems/longest-palindromic-substring/description/


class Solution {
public:
    string longestPalindrome(string s) {
        bool dp[s.size()][s.size()];
        int p,q,mx=0;
        

        int cnt=0;

        for(int g=0;g<s.size();g++)
        {
            for(int i=0,j=g;j<s.size();i++,j++)
            {
                if(g==0)dp[i][j]=true;
                else if(g==1) dp[i][j]=s[i]==s[j];
                else dp[i][j]=s[i]==s[j]&&dp[i+1][j-1];

                if(dp[i][j])
                {
                    if(j-i>=mx)
                    {
                        cnt++;
                        mx=j-i;
                        p=i,q=j;
                    }
                }
            }
        }
        cout<<cnt<<endl;//Counting palindromic substring

        return s.substr(p,mx+1);

    }
};





}