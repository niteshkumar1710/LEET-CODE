class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
    //    unordered_map<long long,int> m;
    //    int val=0;
    //    for(int i=0 ; i<nums.size();i++)
    //    {
    //     m[nums[i]]++;
    //    }
    //    for(auto it:m)
    //    {
    //     if(it.second==1)
    //     {
    //         val= it.first;
    //     }
    //    }
    //    return val;
       
        int xor1=0;
        for (int i=0 ; i<nums.size();i++)
        {
            xor1=xor1^nums[i];
        }
        return xor1;
        
        
    }
};