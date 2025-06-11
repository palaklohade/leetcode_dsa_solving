class Solution {
public:
    string largestNumber(vector<int>& nums) {
       vector<string> strnums;

       for(int num : nums){
        strnums.push_back(to_string(num));
       }

       sort(strnums.begin(), strnums.end() , [](string a , string b){
        return a + b > b + a;
       });
       if(strnums[0] == "0") return "0";

       string result ="";
       for(auto st : strnums){
        result += st;
       }
       return result;
    }
};