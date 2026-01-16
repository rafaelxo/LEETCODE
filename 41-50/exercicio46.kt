class Solution {
    fun permute(nums: IntArray): List<List<Int>> {
        val resp = mutableListOf<List<Int>>()
        val curr = mutableListOf<Int>()
        val used = BooleanArray(nums.size)
        fun backtrack() {
            if (curr.size == nums.size) {
                resp.add(ArrayList(curr))
                return
            }
            for (i in nums.indices) {
                if (used[i]) continue
                used[i] = true
                curr.add(nums[i])
                backtrack()
                curr.removeAt(curr.size - 1)
                used[i] = false
            }
        }
        backtrack()
        return resp
    }
}
