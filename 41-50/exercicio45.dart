class Solution {
    int jump(List<int> nums) {
        int jmp = 0, end = 0;
        int far = 0;
        for (int i = 0; i < nums.length - 1; i++) {
            far = far > i + nums[i] ? far : i + nums[i];
            if (i == end) {
                jmp++;
                end = far;
            }
        }
        return jmp;
    }
}
