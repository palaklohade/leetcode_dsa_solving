class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<int> j;
        int count = 0;
        for(char ch : jewels){
            j.insert(ch);
        }

        for(char ch : stones){
            if(j.count(ch)){
                count++;
            }
        }
        return count;
    }
};