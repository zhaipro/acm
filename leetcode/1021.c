char * removeOuterParentheses(char * S){
    int d = 0, j = 0;
    for(int i=0; S[i]; i++)
    {
        if(S[i] == '(') {
            d ++;
        }
        if(d > 1) {
            S[j] = S[i];
            j ++;
        }
        if(S[i] == ')') {
            d --;
        }
    }
    S[j] = 0;
    return S;
}
