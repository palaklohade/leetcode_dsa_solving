class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        for(int num : nums){
            s.insert(num);
        }

        int maxlen = 0;
        for(int num: s){
            if(s.find(num - 1) == s.end()){
                int currnum = num;
                int currlen = 1;

                while(s.find(currnum + 1) != s.end()){
                    currnum++;
                    currlen++;
                }
                maxlen = max(maxlen, currlen);
            }
        }
        return maxlen;
    }
};