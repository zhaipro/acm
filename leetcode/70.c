int climbStairs(int n){
    if(n == 1)
        return 1;
    if(n == 2)
        return 2;
    int f_1 = 1, f_2 = 2, f_n = 0;
    for(int i=2; i<n; i++)
    {
        f_n = f_2 + f_1;
        f_1 = f_2;
        f_2 = f_n;
    }
    return f_n;
}
