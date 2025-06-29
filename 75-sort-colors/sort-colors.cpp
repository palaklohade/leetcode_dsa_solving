class Solution {
public:
    void sortColors(vector<int>& nums) {
        //sort(nums.begin(), nums.end());
        //this will take o(n log n) time complexity 
        //can it be more optimal ?
        int low = 0; int high = nums.size() - 1;
        int mid = 0;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low++], nums[mid++]);
            }else if(nums[mid]== 1){
                mid++;
            }else{
                swap(nums[mid],nums[high--]);
            }
        }
    }
    //time complexity - o(n) optimised .
};