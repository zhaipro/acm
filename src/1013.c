#include <stdio.h>

int main(int argc, char *argv[])
{
    int root,c;
    while(1)
    {
        root = getchar() - '0';
        if(root == 0)
            break;

        while((c=getchar())!='\n')
        {
            root += c-'0';
        }

        printf("%d\n",(root-1)%9+1);
    }
    return 0;
}
