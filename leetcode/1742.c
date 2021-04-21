
int sum(int x) {
    int r = 0;
    while(x) {
        r += x % 10;
        x /= 10;
    }
    return r;
}

int countBalls(int lowLimit, int highLimit){
    int rs[46] = {0}, r = 0;
    for(int x=lowLimit; x<=highLimit; x++) {
        rs[sum(x)] ++;
    }
    for(int i=0; i<sizeof(rs) / sizeof(rs[0]); i++) {
        if(rs[i] > r) {
            r = rs[i];
        }
    }
    return r;
}
