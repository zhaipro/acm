int hammingWeight(uint32_t n) {
    int r = 0;
    while(n)
    {
        if(n & 1) {
            r ++;
        }
        n >>= 1;
    }
    return r;
}
