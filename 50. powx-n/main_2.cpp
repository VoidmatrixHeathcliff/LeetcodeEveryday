class Solution {
public:
    double myPow(double x, int n) {
        double dResult = 1.0;
        for (int i = n; i; i /= 2)
            (i & 1) ? (dResult *= x, x *= x) : x*= x;
        return n < 0 ? 1 / dResult : dResult;
    }
};