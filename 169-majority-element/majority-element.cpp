class Solution {
public:
    int majorityElement(vector<int>& nums) {
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