int countSegments(char * s){
    bool start = false;
    int c = 0;
    for(; *s; s++)
    {
        if(*s == ' ') {
            start = false;
        } else if(!start) {
            start = true;
            c ++;
        }
    }
    return c;
}
