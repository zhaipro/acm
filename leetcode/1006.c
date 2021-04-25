
int clumsy(int N){
    int r = 0, t = 1;
    for(; N >= 4; N -= 4) {
        r = r + t * N * (N - 1) / (N - 2) + (N - 3);
        t = -1;
    }
    if(N == 3) {
        r += t * 3 * 2;
    } else if(N == 2) {
        r += t * 2;
    } else if(N == 1) {
        r += t;
    }
    return r;
}
