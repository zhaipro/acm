int findComplement(int num){
    int r = 0, t = num;
    while(t)
    {
        t >>= 1;
        r = (r << 1) | 1;
    }
    return r ^ num;
}
