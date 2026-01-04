import java.util.*;

class exercicio1 {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<>(nums.length * 2);
        for (int i = 0; i < nums.length; i++) {
            int num = nums[i];
            Integer idx = map.get(target - num);
            if (idx != null) return new int[] { idx, i };
            map.put(num, i);
        }
        return new int[0];
    }
}
