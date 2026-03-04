int titleToNumber(char* columnTitle) {
    int resp = 0;
    for (int i = 0; columnTitle[i] != '\0'; i++) resp = resp * 26 + (columnTitle[i] - 'A' + 1);
    return resp;
}
