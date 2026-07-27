class Solution{
    public:
        int countSubarrwithequalzeroandone(vector<int>& arr){
            unordered_map<int,int> mp;
            int prefix = 0;
            mp[0] = 1;
            int ans = 0;
            for(int num : arr){
                if(num == 0)
                    num = -1;
                prefix += num;
                ans += mp[prefix];
                mp[prefix]++;
            }
            return ans;
        }
};