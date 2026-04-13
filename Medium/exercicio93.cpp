class Solution {
public:
    vector<string> resp;
    void backtrack(string& s, int idx, int parts, string current) {
        if (parts == 4 && idx == s.size()) {
            current.pop_back();
            resp.push_back(current);
            return;
        }
        if (parts > 4 || idx >= s.size()) return;
        for (int len = 1; len <= 3 && idx + len <= s.size(); len++) {
            string segment = s.substr(idx, len);
            if (segment.size() > 1 && segment[0] == '0') continue;
            int value = stoi(segment);
            if (value > 255) continue;
            backtrack(s, idx + len, parts + 1, current + segment + ".");
        }
    }

    vector<string> restoreIpAddresses(string s) {
        resp.clear();
        backtrack(s, 0, 0, "");
        return resp;
    }
};
