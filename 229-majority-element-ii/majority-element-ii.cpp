class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int , int> freq;
        vector<int> result;
        int n = nums.size();
        for(int i : nums){
            freq[i]++;
        }

        for(auto& num : freq){
            if(num.second > n/3){
                result.push_back(num.first);
            }
        }
        return result;
    }
};