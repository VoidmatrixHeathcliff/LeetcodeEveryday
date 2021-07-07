class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream sstream(s);
        string temp;
        while (sstream >> temp);
        return temp.size();
    }
};