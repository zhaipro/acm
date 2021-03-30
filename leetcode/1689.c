int minPartitions(char * n){
    int r = 1;
    for(; *n; n++)
    {
        if(*n - '0'> r) {
            r = *n - '0';
        }
    }
    return r;
}
