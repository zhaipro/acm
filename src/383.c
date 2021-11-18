bool canConstruct(char * ransomNote, char * magazine){
    int c[26] = {0};

    for (; *magazine; magazine++) {
        c[*magazine - 'a'] ++;
    }

    for (; *ransomNote; ransomNote++) {
        if (c[*ransomNote - 'a'] <= 0) {
            return false;
        }
        c[*ransomNote - 'a'] --;
    }
    return true;
}
