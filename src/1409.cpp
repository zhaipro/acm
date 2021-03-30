#include <stdio.h>
#include <ctype.h>

void digits()
{
    int c = getchar();
    if(isdigit(c)){
        while(isdigit(c=getchar()))
            ;
        ungetc(c,stdin);
    }else {
        ungetc(c,stdin);
        throw 0;
    }
}

void optional_fraction()
{
    int c = getchar();
    if(c == '.')
        digits();
    else
        ungetc(c,stdin);
}

void optional_exponent()
{
    int c = getchar();
    if(c == 'E'){
        c = getchar();
        if(c != '-')
            ungetc(c,stdin);
        digits();
    }else{
        ungetc(c,stdin);
    }
}

void number()
{
    digits();
    optional_fraction();
    optional_exponent();
    int c = getchar();
    if(c != '\n'){
        throw 0;
    }
}

int main()
{
    int t;
    scanf("%d\n",&t);
    while(t--)
    {
      try{
        number();
        printf("YES\n");
      }catch(int e){
        while(getchar()!='\n')
            ;
        printf("NO\n");
      }
    }
    return 0;
}
