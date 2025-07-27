class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //using moor's voting algo for space optimization
        int count = 0 ; 
        int element = 0 ; 
        for(int num : nums){
            if(count == 0){
                element = num;
            }
            count += (num == element) ? 1 : -1;
        }
        return element;
    }
};