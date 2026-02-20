class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int resp = 0;
        for (int num : nums) resp ^= num;
        return resp;
    }
};
