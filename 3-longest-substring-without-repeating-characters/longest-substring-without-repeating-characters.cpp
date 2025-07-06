class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> last_seen;
        int left = 0;
        int maxlen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

            if (last_seen.count(c) && last_seen[c] >= left) {
                left = last_seen[c] + 1;  
            }

            last_seen[c] = right;
            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};