char *convert(char *s, int numRows) {
    int len = strlen(s);
    if (numRows == 1 || numRows >= len) {
        char *res = (char*)malloc(len + 1);
        strcpy(res, s);
        return res;
    }
    char *resp = (char*)malloc(len + 1);
    int pos = 0;
    int cycle = 2 * (numRows - 1);
    for (int i = 0; i < numRows; i++) {
        for (int j = i; j < len; j += cycle) {
            resp[pos++] = s[j];
            int diag = j + cycle - 2 * i;
            if (i > 0 && i < numRows - 1 && diag < len) resp[pos++] = s[diag];
        }
    }
    resp[pos] = '\0';
    return resp;
}
