class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> resp = {0};
        for (int i = 0; i < n; i++) {
            int size = resp.size();
            for (int j = size - 1; j >= 0; j--) resp.push_back(resp[j] | (1 << i));
        }
        return resp;
    }
};
