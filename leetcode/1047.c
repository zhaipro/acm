char * removeDuplicates(char * S){
    int i, j;
    for(i=1, j=0; S[i]; i++)
    {
        if(j >= 0 && S[j] == S[i]) {
            j --;
        } else {
            j ++;
            S[j] = S[i];
        }
    }
    S[i] = 0;
    return S;
}
