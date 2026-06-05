class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> m;
        vector<pair<int, int>> st;
        for (auto s : nums) {
            m[s]++;
        }
        for (auto& pair : m) {
            st.push_back({pair.second, pair.first});
        }
        sort(st.rbegin(), st.rend());
        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(st[i].second);
        }
        return result;
    }
};
