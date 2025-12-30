char *convert(char *s, int numRows) {
    if (numRows == 1 || numRows >= strlen(s)) return s;
    char *resp = (char*)malloc(strlen(s) + 1);
    int pos = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < strlen(s); j += 2 * (numRows - 1)) {
            resp[pos++] = s[j];
            if (i > 0 && i < numRows - 1 && j + 2 * (numRows - 1) - 2 * i < strlen(s)) resp[pos++] = s[j + 2 * (numRows - 1) - 2 * i];
        }
    }
    resp[pos] = '\0';
    return resp;
}
