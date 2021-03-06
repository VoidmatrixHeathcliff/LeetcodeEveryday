class Solution {
public:
    int myAtoi(string s) {
        long _ltmp = atol(s.c_str());
        return _ltmp < -2147483648 ? -2147483648 : (_ltmp > 2147483647 ? 2147483647 : _ltmp);
    }
};