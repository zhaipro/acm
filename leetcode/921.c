int minAddToMakeValid(char * S){
    int r = 0, t = 0;
    for(; *S; S++)
    {
        if(*S == '(') {
            t ++;
        } else if(t == 0) {
            r ++;
        } else {
            t --;
        }
    }
    return r + t;
}
