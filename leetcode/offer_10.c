int numWays(int n){
    long long a = 1, b = 0 , r = 1;
    for(; n; n--) {
        r = (a + b) % 1000000007;
        b = a;
        a = r;
    }
    return r;
}
