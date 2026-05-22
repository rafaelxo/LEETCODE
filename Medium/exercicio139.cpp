class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> words(wordDict.begin(), wordDict.end());
        vector<bool> dp(s.size() + 1, false);
        dp[0] = true;
        for (int i = 0; i < s.size(); i++) {
            if (!dp[i]) continue;
            string curr = "";
            for (int j = i; j < s.size(); j++) {
                curr += s[j];
                if (words.count(curr)) dp[j + 1] = true;
            }
        }
        return dp[s.size()];
    }
};
