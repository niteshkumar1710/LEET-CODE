class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //     vector<int>hash;
        //     for(int i=0;i<nums.size();i++)
        //     {
        //         hash[nums[i]]+=1;
        //     }
        //     int maxElement=0;
        //     int index;
        //     for(int i=0;i<hash.size();i++)
        //     {
        //         if(hash[i]>maxElement){
        //             maxElement=ha`sh[i];
        //             index=i;
        //         }

        //     }
        //     return index;
 
        // }
        unordered_map<int, int> hash; // Hash map to store frequencies
        for (int num : nums) {
            hash[num]++; // Increment the count for this number
        }

        int maxElement = 0;
        int index = nums[0]; // Default to the first element
        for (auto& [key, value] : hash) {
            if (value > maxElement) {
                maxElement = value;
                index = key;
            }
        }
        return index;
    }
};