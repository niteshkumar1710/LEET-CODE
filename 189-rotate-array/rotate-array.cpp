class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        // vector<int>newarr;
        // for(int i=nums.size()-k;i<nums.size();i++)
        // {
        //     newarr.push_back(nums[i]);
        // }
        // for(int i=0;i<nums.size()-k;i++)
        // {
        //     newarr.push_back(nums[i]);
        // }
        // nums=newarr;

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());

        
    }
};