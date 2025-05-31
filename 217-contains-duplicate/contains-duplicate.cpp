class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> freq;
    for(int num : nums){
        if(freq.count(num)){
            return true;
        }
    freq.insert(num);
    } 
    return false;       
    }
};