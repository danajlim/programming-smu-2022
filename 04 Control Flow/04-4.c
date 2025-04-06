
char convertChar(char c) {
    if ((c >= '0') && (c <= '9'))
        return (c == '9' ? '0' : c + 1);
    else if ((c >= 'A') && (c <= 'Z'))
        return (c == 'Z' ? 'A' : c + 1);
    else if ((c >= 'a') && (c <= 'z'))
        return (c == 'z' ? 'a' : c + 1);
    else
        return c;
}
