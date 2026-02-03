char* simplifyPath(char* path) {
    char* stack[2000];
    int top = 0;
    char* copy = strdup(path);
    char* token = strtok(copy, "/");
    while (token != NULL) {
        if (strcmp(token, ".") == 0) { }
        else if (strcmp(token, "..") == 0) {
            if (top > 0) top--;
        }
        else stack[top++] = token;
        token = strtok(NULL, "/");
    }
    if (top == 0) {
        free(copy);
        return strdup("/");
    }
    int size = 0;
    for (int i = 0; i < top; i++) size += strlen(stack[i]) + 1;
    char* resp = (char*)malloc(size + 1);
    resp[0] = '\0';
    for (int i = 0; i < top; i++) {
        strcat(resp, "/");
        strcat(resp, stack[i]);
    }
    free(copy);
    return resp;
}
