int matrixScore(int** A, int ASize, int* AColSize){
    int r = 0, m = ASize, n = AColSize[0];
    for(int i=0; i<m; i++)
    {
        int t = 1 - A[i][0];
        for(int j=0; j<n; j++)
        {
            A[i][j] ^= t;
            r += A[i][j] << (n - j - 1);
        }
    }

    for(int j=0; j<n; j++)
    {
        int t = 0;
        for(int i=0; i<m; i++)
        {
            t += A[i][j];
        }
        if(m - t - t > 0) {
            r += (m - t - t) * (1 << (n - j - 1));
        }
    }
    return r;
}
