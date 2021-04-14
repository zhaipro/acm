int maxDepth(char * s){
    int r = 0, t = 0;
    for(; *s; s++)
    {
        if(*s == '(') {
            t ++;
        } else if(*s == ')') {
            t --;
        }
        if(t > r) {
            r = t;
        }
    }
    return r;
}
