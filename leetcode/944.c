int minDeletionSize(char ** strs, int strsSize){
    int r = 0;
    for(int i=0; strs[0][i]; i++)
    {
        char c = 0;
        for(int j=0; j<strsSize; j++)
        {
            if(strs[j][i] >= c) {
                c = strs[j][i];
            } else {
                r ++;
                break;
            }
        }
    }
    return r;
}
