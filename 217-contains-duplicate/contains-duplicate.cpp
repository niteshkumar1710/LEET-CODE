class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> hash; // Hash map to store frequencies
        for (int num : nums) {
            hash[num]++; // Increment the count for this number
        }

        
        for (auto& [key, value] : hash) {
            if (value >=2) {
                return true;
            }
        }
        return false;
    }
};