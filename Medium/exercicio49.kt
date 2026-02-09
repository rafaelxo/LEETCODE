class Solution {
    data class Key(val freq: IntArray) {
        override fun equals(other: Any?): Boolean {
            if (this === other) return true
            if (other !is Key) return false
            return freq.contentEquals(other.freq)
        }
        override fun hashCode(): Int {
            return freq.contentHashCode()
        }
    }

    fun groupAnagrams(strs: Array<String>): List<List<String>> {
        val map = HashMap<Key, MutableList<String>>(strs.size)
        for (s in strs) {
            val freq = IntArray(26)
            for (c in s) freq[c - 'a']++
            val key = Key(freq)
            map.getOrPut(key) { mutableListOf() }.add(s)
        }
        return map.values.toList()
    }
}
