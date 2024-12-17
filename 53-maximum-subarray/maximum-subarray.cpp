class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max=INT_MIN;
        int currentsum=0;

        if(nums.size()==1){
            return nums[0];
        }
        
        for(int i=0;i<nums.size();i++)
        {
            // if (currentsum+nums[i]<0)
            // {
            //     currentsum=0;
            // }
            // else{
            //     currentsum+=nums[i];
            // }

            // if(currentsum>max){
            //         max=currentsum;
            // }

            //the above code is not passing the test case while submiting ,but below code gets submited 
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