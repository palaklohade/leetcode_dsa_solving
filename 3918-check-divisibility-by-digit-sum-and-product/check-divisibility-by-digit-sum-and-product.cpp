class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int ori = n;

        while(n > 0){
            int digit = n % 10;
            sum += digit;
            product *= digit;
            n /= 10;
        }
        int total = sum + product;
        if(total == 0)return false;
        return (ori % total == 0);
    }
};