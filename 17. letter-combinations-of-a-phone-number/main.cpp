class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return _vResults;
        _pStrDigits = &digits;
        string strCombination;
        Backtrack(0, strCombination);
        return _vResults;
    }

    void Backtrack(int index, string& combination) {
        if (index == _pStrDigits->size())
            _vResults.push_back(combination);
        else {
            for (const char& c : _mapPhone.at((*_pStrDigits)[index])) {
                combination.push_back(c);
                Backtrack(index + 1, combination);
                combination.pop_back();
            }
        }
    }

private:
    vector<string> _vResults;
    string* _pStrDigits;
    unordered_map<char, string> _mapPhone{
            {'2', "abc"}, {'3', "def"},
            {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"},
            {'8', "tuv"}, {'9', "wxyz"}
        };
};