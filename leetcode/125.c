bool isPalindrome(char * s){
    // 数字 大写 小写
    // [s, e)
    char *t = s;
    char *e = s;
    for(t = s; *t; t++) {
        if (('0' <= *t && *t <= '9') || ('A' <= *t && *t <= 'Z')) {
            *e++ = *t;
        } else if ('a' <= *t && *t <= 'z') {
            *e++ = *t - 'a' + 'A';
        }
    }
    *e = 0;
    for (e--; s < e; s++, e--) {
        if (*s != *e) return false;
    }
    return true;
}
