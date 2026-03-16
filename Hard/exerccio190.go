var memo map[[3]int]bool
var visited map[[3]int]bool

func dfs(s1, s2 string, i1, i2, length int) bool {
	key := [3]int{i1, i2, length}
	if visited[key] {
		return memo[key]
	}
	sub1 := s1[i1 : i1+length]
	sub2 := s2[i2 : i2+length]
	if sub1 == sub2 {
		visited[key] = true
		memo[key] = true
		return true
	}
	count := [26]int{}
	for i := 0; i < length; i++ {
		count[sub1[i]-'a']++
		count[sub2[i]-'a']--
	}
	for i := 0; i < 26; i++ {
		if count[i] != 0 {
			visited[key] = true
			memo[key] = false
			return false
		}
	}
	for k := 1; k < length; k++ {
		if dfs(s1, s2, i1, i2, k) &&
			dfs(s1, s2, i1+k, i2+k, length-k) {
			visited[key] = true
			memo[key] = true
			return true
		}
		if dfs(s1, s2, i1, i2+length-k, k) &&
			dfs(s1, s2, i1+k, i2, length-k) {
			visited[key] = true
			memo[key] = true
			return true
		}
	}
	visited[key] = true
	memo[key] = false
	return false
}

func isScramble(s1 string, s2 string) bool {
	if len(s1) != len(s2) {
		return false
	}
	memo = make(map[[3]int]bool)
	visited = make(map[[3]int]bool)
	return dfs(s1, s2, 0, 0, len(s1))
}
