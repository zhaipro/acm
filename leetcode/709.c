char * toLowerCase(char * str){
    for(int i=0; str[i]; i++)
    {
        if('A' <= str[i] && str[i] <= 'Z') {
            str[i] += 'a' - 'A';
        }
    }
    return str;
}
