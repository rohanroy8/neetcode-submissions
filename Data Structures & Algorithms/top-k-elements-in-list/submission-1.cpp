class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(auto i:nums) mp[i]++;

        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> q;
        for(auto i:mp){
            q.push({i.second,i.first});
            if(q.size()>k) q.pop();
        }

        vector<int> res;
        for(int i=0; i<k; i++){
            res.push_back(q.top().second);
            q.pop();
        }

        return res;

    }
};
