class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> ump;

        for(int i=0;i<s.size();i++)
        {
            ump[s[i]]++;
        }

        int cnt=0;
        int flag=0;
        for(auto& [key, value] : ump)
        {
            if(value%2==0)
            {
               cnt+=value;
            }
            else
            {
                flag=1;
                value--;
                cnt+=value;
            }
            
        }
        if(flag==1)
        {
            cnt+=1;
        }
        return cnt;
    }
};