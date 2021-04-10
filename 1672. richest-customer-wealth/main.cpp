class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        sort(accounts.begin(), accounts.end(), [&](const vector<int>& a, const vector<int>& b) {
            return accumulate(a.begin(), a.end(), 0) > accumulate(b.begin(), b.end(), 0);
        });
        return accumulate(accounts[0].begin(), accounts[0].end(), 0);
    }
};