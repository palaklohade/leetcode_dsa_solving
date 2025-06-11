class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int currpro = nums[0];
        int maxpro = nums[0];
        int minpro = nums[0];

        for(int i = 1 ; i < nums.size(); i++){
            if(nums[i] < 0){
                swap(maxpro , minpro);
            }
            maxpro = max(nums[i] , maxpro * nums[i]);
            minpro = min(nums[i], minpro * nums[i]);

            currpro = max(currpro , maxpro);
            
        }
        return currpro;
    }
};