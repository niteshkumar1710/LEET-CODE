class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int currentsum=0;

        for(int i=0;i<nums.size();i++)
        {
            
            currentsum+=nums[i];

            if(currentsum>max){
                max=currentsum;
            }
            if(currentsum<0){
                currentsum=0;
            }

        }
        return max;

        
    }
};