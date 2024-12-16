class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int expected_sum=n*(n+1)/2;
        int sum=0;
        for (int i=0 ;i<n;i++)
        {
            sum+=nums[i];

        }
        
        int missing_num=expected_sum-sum;
        return missing_num;
        
    }
};