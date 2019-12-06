#include <stdio.h>


int main()
{
    int n, w, d, y;
    int x;
    while(scanf("%d %d %d %d", &n, &w, &d, &y) != EOF)
    {
        x = (w * (n - 1) * n / 2 - y) / d;
        x = (x + n - 1) % n + 1;
        printf("%d\n", x);
    }
    return 0;
}
