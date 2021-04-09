int translateNum(int num){
    int r0, r1 = 1, r2 = 1, p = 10;
    while(num)
    {
        int c = num % 10;
        r0 = r1;
        if ((c == 1 && p < 10) || (c == 2 && p < 6)) {
            r0 = r1 + r2;
        }
        num /= 10;
        r2 = r1;
        r1 = r0;
        p = c;
    }
    return r1;
}
