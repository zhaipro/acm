
bool isHappy(int n){
    char r[810] = {0};
    int t;
    while(1)
    {
        t = 0;
        while(n) {
            t += (n % 10) * (n % 10);
            n /= 10;
        }
        if(t == 1) {
            return true;
        } else if(r[t]) {
            return false;
        } else {
            n = t;
            r[t] = 1;
        }
    }
}

