public class Solution {
    public int HammingWeight(uint n) {
        return n == 0 ? 0 : HammingWeight((n & (~n + 1)) ^ n) + 1;
    }
}