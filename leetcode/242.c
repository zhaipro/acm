bool isAnagram(char * s, char * t){
    int i = 0;
    int c[26] = {0};
    for (;*s && *t; s++, t++) {
        c[*s - 'a'] ++;
        c[*t - 'a'] --;
    }
    if (*s || *t) return false;
    for(i = 0; i < 26; i++) {
        if (c[i] != 0) return false;
    }
    return true;
}
