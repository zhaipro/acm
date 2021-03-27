bool isValid(char * s){
    int i, j = 0;
    for(i = 0; s[i]; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
            s[j] = s[i];
            j ++;
        } else if(j) {
            j --;
            if((s[j] == '(' && s[i] != ')') || \
               (s[j] == '{' && s[i] != '}') || \
               (s[j] == '[' && s[i] != ']')) {
                return false;
            }
        } else {
            return false;
        }
    }
    return j == 0;
}
