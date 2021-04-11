class Solution {
public:
    bool isUgly(int n) {
        if (n < 1) return false;
        while (!(n % 5)) n /= 5;
        while (!(n % 3)) n /= 3;
        while (!(n % 2)) n /= 2;
        return n == 1;
    }
};