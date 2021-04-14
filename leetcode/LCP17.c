int calculate(char* s){
    int x = 1, y = 0;
    for(;*s; s++)
    {
        if(*s == 'A') {
            x = 2 * x + y;
        } else {
            y = 2 * y + x;
        }
    }
    return x + y;
}
