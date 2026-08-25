class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i : nums) {
            count[i]++;
        }
        int n = nums.size();
        vector<vector<int>> buckets(n+1);

        for(auto& pair : count) {
            int freq = pair.second;
            int actnum = pair.first;
            buckets[freq].push_back(actnum);
        }
        vector<int> res;
        for (int i = n; i >= 0; i--) {
            for (int n : buckets[i]) {
                res.push_back(n);
                if (res.size() == k) {
                    return res;
                }
            }
        }
        return res;
    }
};
