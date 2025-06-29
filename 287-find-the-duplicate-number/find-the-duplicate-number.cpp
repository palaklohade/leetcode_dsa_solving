class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // for(int i = 0 ; i < nums.size() ;  i++){
        //     if(nums[i] == nums[i + 1]){
        //         return nums[i];
        //     }
        // }
        // return 0;
        // not optimised as will take time complexity of o(n log n);
        unordered_map<int , int> freq;
        for (int num : nums) {
            freq[num]++;
            if (freq[num] > 1)
                return num;
        }

        return -1;
    }//time complexity o(n) just in worst case it can go till o(n2)
};