class Solution {
public:
    bool canEatAll(vector<int>& piles, int speed , int h){
        long long  k = 0;
        for(int num : piles){
            k +=(num + speed - 1)  / speed;
        }
        return k <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(), piles.end());
        int answer = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (canEatAll(piles, mid, h)) {
                answer = mid;        
                right = mid - 1;
            } else {
                left = mid + 1;      
            }
        }

        return answer;
    }
};