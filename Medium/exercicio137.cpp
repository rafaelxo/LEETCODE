class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int resp = 0;
        for (int i = 0; i < 32; i++) {
            int sum = 0;
            for (int num : nums) {
                if ((num >> i) & 1) sum++;
            }
            if (sum % 3) resp |= (1 << i);
        }
        return resp;
    }
};
