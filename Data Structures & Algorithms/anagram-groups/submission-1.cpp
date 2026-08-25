class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector<string>> groups;

        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            groups[temp].push_back(s);
        }
        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }
        return result;
    }
};