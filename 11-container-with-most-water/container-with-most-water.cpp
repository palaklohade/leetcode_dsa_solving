class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 ; int right = height.size() - 1;
        int maxpro = 0;
        while(left < right){
            int h = min(height[right], height[left]);
            int w = right - left;
            maxpro = max(maxpro , h * w);

            if( height[left] < height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return maxpro;
        
    }
};