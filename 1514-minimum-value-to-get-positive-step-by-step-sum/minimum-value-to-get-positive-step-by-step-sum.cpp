class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int curr = 0 ;
        int count= INT_MAX;

        for(int x : nums){
            curr += x;
            count = min(count, curr);
            
        }
         return count < 1 ? 1 - count : 1;
    }
};