func subsetsWithDup(nums []int) [][]int {
    sort.Ints(nums)
    var res [][]int
    var path []int
    var backtrack func(start int)
    backtrack = func(start int) {
        temp := make([]int, len(path))
        copy(temp, path)
        res = append(res, temp)
        for i := start; i < len(nums); i++ {
            if i > start && nums[i] == nums[i-1] {
                continue
            }
            path = append(path, nums[i])
            backtrack(i + 1)
            path = path[:len(path)-1]
        }
    }
    backtrack(0)
    return res
}
