int maximum69Number (int num){
    int r = 0, t1 = num, t2 = 3;
    while(t1)
    {
        if(t1 % 10 == 6) {
            r = t2;
        }
        t2 *= 10;
        t1 /= 10;
    }
    return num + r;
}
