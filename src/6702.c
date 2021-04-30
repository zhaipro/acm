#include <stdio.h>

int main()
{
    unsigned int a, b;
    scanf("%d", &a);
    while(EOF != scanf("%u %u", &a, &b)) {
        a = a & b;
        a = a?a:1;
        printf("%u\n", a);
    }
    return 0;
}
