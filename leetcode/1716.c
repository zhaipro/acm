int totalMoney(int n){
    int a = n / 7, b = n % 7;
    return 7 * (7 + a) * a / 2 + \
           a * b + (b * b + b) / 2;
}
