int hammingDistance(int x, int y){
    int r = 0;
    x ^= y;
    while(x)
    {
        if(x & 1) {
            r ++;
        }
        x >>= 1;
    }
    return r;
}
