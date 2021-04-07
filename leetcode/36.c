bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    for(int i=0; i<9; i++)
    {
        int l = 0, c = 0, g = 0;
        for(int j=0; j<9; j++)
        {
            char t;
            t = board[i][j];
            if(t != '.') {
                if(l & 1 << t - '0') {
                    return false;
                }
                l |= 1 << t - '0';
            }
            t = board[j][i];
            if(t != '.') {
                if(c & 1 << t - '0') {
                    return false;
                }
                c |= 1 << t - '0';
            }
            t = board[i / 3 * 3 + j / 3][i % 3 * 3 + j % 3];
            if(t != '.') {
                if(g & 1 << t - '0') {
                    return false;
                }
                g |= 1 << t - '0';
            }
        }
    }
    return true;
}
