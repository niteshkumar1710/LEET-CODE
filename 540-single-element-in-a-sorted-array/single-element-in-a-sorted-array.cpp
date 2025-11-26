class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       unordered_map<long long,int> m;
       int val=0;
       for(int i=0 ; i<nums.size();i++)
       {
        m[nums[i]]++;
       }
       for(auto it:m)
       {
        if(it.second==1)
        {
            val= it.first;
        }
       }
       return val;
       
        // xor=0
        // for (int i=0 ; i<nums.size();i++)
        // {
        //     xor=xor^nums[i];
        // }
        // return xor;
        
        
    }
};