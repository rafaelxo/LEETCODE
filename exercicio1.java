import java.util.*;

class exercicio1 {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> resp = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            int complement = target - nums[i];
            if (resp.containsKey(complement)) return new int[] { resp.get(complement), i };
            resp.put(nums[i], i);
        }
        return new int[] {};
    }
}
