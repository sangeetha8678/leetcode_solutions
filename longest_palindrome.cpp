class Solution {
public:
    int longestPalindrome(string s) {
         unordered_set<char> st;
        int length = 0;

        for(char c : s) {
            if(st.count(c)) {
                length += 2;
                st.erase(c);
            } else {
                st.insert(c);
            }
        }

        if(!st.empty())
            length++;

        return length;
    }
};