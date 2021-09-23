bool isPowerOfFour(int n){
    if (n <= 0) return false;
    while(n % 4 == 0) {
        n /= 4;
    }
    return n == 1;
}

bool isPowerOfFour(int n){
    if (n <= 0) return false;
    if (n == 1) return true;
    return (!(((n - 2) & n) | ((n - 1) & n))) && (n & 0x55555555);
}

bool isPowerOfFour(int n) {
    return n > 0 && (n & (n - 1)) == 0 && n % 3 == 1;
}
