class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;
        for(auto x:nums) s.insert(x);
        
    return nums.size() != s.size();
    }
};