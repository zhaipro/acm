#include <stdio.h>

int main(int argc, char *argv[])
{
    int n;
    int fact_n;
    double e;
    printf("n e\n- -----------\n");
    printf("0 1\n1 2\n2 2.5\n");

    e = 2.5;
    fact_n = 2;
    for(n=3;n<10;n++)
    {
        fact_n *= n;
        e += 1.0f/fact_n;
        printf("%d %02.9f\n",n,e);
    }
    return 0;
}
