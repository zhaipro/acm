int diagonalSum(int** mat, int matSize, int* matColSize){
    int r = 0;
    for(int i=0; i<matSize; i++)
    {
        r += mat[i][i];
        r += mat[i][matSize - i - 1];
    }
    if(matSize % 2) {
        r -= mat[matSize / 2][matSize / 2];
    }
    return r;
}
