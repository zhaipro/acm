
int numRabbits(int* answers, int answersSize){
    int rs[1000] = {0}, r = 0;
    for(int i = 0; i < answersSize; i++) {
        rs[answers[i]] ++;
    }
    for(int i = 0; i < sizeof(rs) / sizeof(rs[0]); i++) {
        r += (rs[i] + i) / (i + 1) * (i + 1);
    }
    return r;
}
