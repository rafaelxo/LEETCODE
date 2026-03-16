bool dfs(char *s1, char *s2, int len) {
    if (strncmp(s1, s2, len) == 0) return true;
    int count[26] = {0};
    for (int i = 0; i < len; i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) return false;
    }
    for (int i = 1; i < len; i++) {
        if (dfs(s1, s2, i) &&
            dfs(s1 + i, s2 + i, len - i))
            return true;
        if (dfs(s1, s2 + len - i, i) &&
            dfs(s1 + i, s2, len - i))
            return true;
    }
    return false;
}

bool isScramble(char* s1, char* s2) {
    int len1 = strlen(s1), len2 = strlen(s2);
    if (len1 != len2) return false;
    return dfs(s1, s2, len1);
}
