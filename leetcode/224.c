#include <stdio.h>

int parse_num(char **ps) {
    int r = 0;
    for(; '0' <= **ps && **ps <= '9'; (*ps) ++) {
        r *= 10;
        r += **ps - '0';
    }
    (*ps) --;
    return r;
}

int _calculate(char **ps) {
    int r = 0, n = 1;
    for(; **ps; (*ps) ++) {
        if(**ps == '-') {
            n = -n;
        } else if(**ps == '(') {
            (*ps) ++;
            r += n * _calculate(ps);
            n = 1;
        } else if(**ps == ')') {
            break;
        } else if(**ps != '+' && **ps != ' ') {
            r += n * parse_num(ps);
            n = 1;
        }
    }
    return r;
}

int calculate(char * s){
    return _calculate(&s);
}

int main()
{
    int r = calculate("(1+(4+5+2)-3)+(6+8)");
    printf("%d\n", r);
}
