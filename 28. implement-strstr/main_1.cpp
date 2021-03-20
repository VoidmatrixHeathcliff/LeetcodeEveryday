class Solution {
public:
    int strStr(string haystack, string needle) {
        int iLengthHaystack = haystack.size(), iLengthNeedle = needle.size();
        for (int index = 0; index < iLengthHaystack - iLengthNeedle + 1; index++)
            if (haystack.substr(index, iLengthNeedle) == needle)
                return index;
        return -1;
    }
};