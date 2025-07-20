class Solution {
public:
    #define MOD 1000000007

    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<int, int> y_count;
        for (auto& p : points) {
            y_count[p[1]]++;
        }

        vector<long long > freqs;
        for (auto& [y, count] : y_count) {
            if (count >= 2) {
long long pairs = 1LL * count * (count - 1) / 2;
                freqs.push_back(pairs);            }
        }

        long long res = 0;
        for (int i = 0; i < freqs.size(); i++) {
            for (int j = i + 1; j < freqs.size(); j++) {
                res += freqs[i] * freqs[j];
            }
        }

        return res % MOD;
    }
};