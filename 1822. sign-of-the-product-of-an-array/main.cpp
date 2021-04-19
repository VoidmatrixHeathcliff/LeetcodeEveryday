class Solution {
public:
    int arraySign(vector<int>& nums) {
        int iPosNum = 0, iNegNum = 0;
        for (int num : nums)
            if(!num) return 0;
            else num > 0 ? iPosNum++ : iNegNum++;
        return iNegNum % 2 ? -1 : 1;
    }
};