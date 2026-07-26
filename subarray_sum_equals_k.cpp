class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        int prefix = 0;
        mp[0] =1;
        int ans = 0;
        for(int num : nums){
            prefix += num;
            if(mp.find(prefix-k) != mp.end())
                ans += mp[prefix-k];
            mp[prefix]++;
        }
        return ans;
    }
};