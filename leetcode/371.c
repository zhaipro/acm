int getSum(int a, int b){
    unsigned int t;
    do {
        t = a & b;
        a ^= b;
        b = t << 1;
    } while(t);
    return a | b;
}
