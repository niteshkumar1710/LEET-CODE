class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // int k = 2;

        // if (nums.size() <= 2) return nums.size();
        
        // for (int i = 2; i < nums.size(); i++) {
        //     if (nums[i] != nums[k - 2]) {
        //         nums[k] = nums[i];
        //         k++;
        //     }
        // }

        // return k; 
       int i=0;
        int cnt=1;
        for (int j=1;j<nums.size();j++)
        {
            if(nums[j]== nums[i])
            {
                cnt++;
                if(cnt<=2){
                    nums[i+1]=nums[j];//if this is not used at last for input 001111233 will be 001123233 to know in detail see last page of the note that learned array playlist
                    i++;
                }
               
            }
            else if(nums[j]!=nums[i])
            {
                cnt=1;
                nums[i+1]=nums[j];
                i++;
            }
        }
        return i+1;

    }
};