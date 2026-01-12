class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";
        string resp = "1";
        for (int i = 1; i < n; i++) {
            string next;
            next.reserve(resp.size() * 2);
            for (int j = 0; j < resp.size(); ) {
                char c = resp[j];
                int count = 0;
                while (j < resp.size() && resp[j] == c) {
                    j++;
                    count++;
                }
                next.push_back(count + '0');
                next.push_back(c);
            }
            resp.swap(next);
        }
        return resp;
    }
};
