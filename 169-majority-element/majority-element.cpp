class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> freq;
        int maxFreq = 0;
        int maxElement = nums[0];

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > maxFreq) {
                maxFreq = freq[num];
                maxElement = num;
            }
        }

        return maxElement;
    }
};