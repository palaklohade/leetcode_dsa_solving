class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int left = 0 ;
        int maxlength = 0 ;
        for(int right = 0 ; right < s.size(); right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxlength = max(maxlength , right - left + 1);
        }
        return maxlength;
    }
};
