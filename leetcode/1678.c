char * interpret(char * command){
    char *s = command, *c = command;
    for(; *c; c++)
    {
        if(*c == 'G') {
            *s++ = *c;
        } else if(c[1] == ')') {
            *s++ = 'o';
            c++;
        } else {
            *s++ = 'a';
            *s++ = 'l';
            c += 3;
        }
    }
    *s = 0;
    return command;
}
