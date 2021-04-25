
int gcd(int a,int b)
{
    int t;
    while(b) {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int lcm(int a,int b)
{
    return a * b / gcd(a, b);
}

int mirrorReflection(int p, int q){
    int r = lcm(p, q);
    return ((r / p) % 2) * (2 - (r / q) % 2);
}
