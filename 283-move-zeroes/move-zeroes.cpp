class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // int j=-1;
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==0){
        //         j=i;
        //         break;// here break is used to stop when we found the first zero because after this the j always be 0 when we swap because only zero and non zero is swapped
        //     }
        // }
        // //assignign i to the next position of the j to check non zero and swap
        // for (int i=j+1;i<nums.size();i++)
        // {
        //     if(nums[i]!=0){
        //         swap(nums[j],nums[i]);
        //         j++;
        //     }
        // }
        int j = 0;  // position to place next non-zero

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};