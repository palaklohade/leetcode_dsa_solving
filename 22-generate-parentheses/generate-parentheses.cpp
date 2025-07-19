class Solution {
public:
    void backtrack(string cur , int open , int close, int n , vector<string>& result){
        if(cur.length() == 2 * n){
            result.push_back(cur);
            return;
        }
        if(open < n){
            backtrack(cur + '(' , open + 1 , close, n , result);
        }
        if(close < open){
            backtrack(cur + ')' , open , close+ 1 , n , result);
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack("" , 0 , 0, n , result);
        return result;
    }
};