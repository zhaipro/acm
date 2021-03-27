int balancedStringSplit(char * s){
    int r = 0, i = 0;
    for(; *s; s++)
    {
        if(*s == 'L') {
            i ++;
        } else {
            i --;
        }
        if(i == 0) {
            r ++;
        }
    }
    return r;
}
