class Solution {
    fun permuteUnique(nums: IntArray): List<List<Int>> {
        val resp = mutableListOf<List<Int>>()
        val freq = mutableMapOf<Int, Int>()
        for (n in nums) freq[n] = freq.getOrDefault(n, 0) + 1
        fun backtrack(curr: MutableList<Int>) {
            if (curr.size == nums.size) {
                resp.add(curr.toList())
                return
            }
            for ((num, count) in freq) {
                if (count == 0) continue
                freq[num] = count - 1
                curr.add(num)
                backtrack(curr)
                curr.removeAt(curr.size - 1)
                freq[num] = count
            }
        }
        backtrack(mutableListOf())
        return resp
    }
}
