class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mp; 
        vector<vector<int>> bucket(n+1);
        vector<int> res(k);

        for(auto i:nums) mp[i]++;
        for(auto i:mp) bucket[i.second].push_back(i.first);

        for(int i=n; i>0; i--){
            if(!k) break;
            for(auto l:bucket[i]) res[--k] = l;
        }

        return res;
        
    }
};
