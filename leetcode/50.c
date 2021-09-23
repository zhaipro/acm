
double myPow(double x, int n){
    double r = 1;
    if(n == 0) return 1;
    if(n < 0) {
        x = 1 / x;
    }
    while(n > 1 || n < -1) {
        if (n % 2) {
            r *= x;
        }
        x *= x;
        n /= 2;
    }
    return r * x;
}
