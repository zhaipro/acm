int tribonacci(int n){
    int t0 = 0, t1 = 1, t2 = 1, tn = 0;
    if(n < 3) {
        return (n + 1) / 2;
    }
    for(int i=2; i<n; i++)
    {
        tn = t0 + t1 + t2;
        t0 = t1;
        t1 = t2;
        t2 = tn;
    }
    return tn;
}
