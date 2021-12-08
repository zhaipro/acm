char firstUniqChar(char* s){
    int counts[26] = {0};
    for (char *c = s; *c; c++) {
        counts[*c - 'a'] ++;
    }
    for (char *c = s; *c; c++) {
        if (counts[*c - 'a'] == 1) {
            return *c;
        }
    }
    return ' ';
}
