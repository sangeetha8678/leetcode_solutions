class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;

        if (p.size() > s.size())
            return ans;

        vector<int> pCount(26, 0), window(26, 0);

        for (char c : p)
            pCount[c - 'a']++;

        int k = p.size();

        for (int i = 0; i < s.size(); i++) {

            window[s[i] - 'a']++;

            if (i >= k)
                window[s[i - k] - 'a']--;

            if (window == pCount)
                ans.push_back(i - k + 1);
        }

        return ans;
    }
};