char findTheDifference(char * s, char * t){
    int i;
    int counts[26] = {0};
    for(; *s; s++)
    {
        counts[*s - 'a'] --;
    }
    for(; *t; t++)
    {
        counts[*t - 'a'] ++;
    }
    for(i=0; counts[i] == 0; i++);
    return i + 'a';
}
