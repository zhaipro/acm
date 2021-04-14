bool arrayStringsAreEqual(char ** word1, int word1Size, char ** word2, int word2Size){
    char *w1 = word1[0], *w2 = word2[0];
    while(*w1 && *w2 && *w1 == *w2)
    {
        w1 ++;
        w2 ++;
        if(*w1 == 0 && word1Size > 1) {
            word1 ++;
            word1Size --;
            w1 = word1[0];
        }
        if(*w2 == 0 && word2Size > 1) {
            word2 ++;
            word2Size --;
            w2 = word2[0];
        }
    }
    return *w1 == *w2;
}
