class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;
        for(int i=0; i<strs.size(); i++){
            string fq(26,'0');
            for(auto j:strs[i]) fq[j-'a'] = char(fq[j-'a']-'0'+1);

            mp[fq].push_back(strs[i]);
        }

        vector<vector<string>> res;
        for(auto i:mp) res.push_back(i.second);

        return res;
    }
};

// act -> 1010000...100...