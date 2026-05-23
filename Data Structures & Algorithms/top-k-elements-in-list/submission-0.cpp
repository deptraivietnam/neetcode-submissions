class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]]++;
        }

        // đưa vào vector rồi sort theo số lần xuất hiện
        vector<pair<int,int>> vec(mp.begin(), mp.end());
        sort(vec.begin(), vec.end(), [](auto a, auto b){
            return a.second > b.second; // giảm dần
        });

        vector<int> result;
        for(int i = 0; i < k; i++){
            result.push_back(vec[i].first);
        }
        return result;
    }
};