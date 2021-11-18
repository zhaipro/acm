bool isToeplitzMatrix(int** matrix, int matrixSize, int* matrixColSize){
    int m = matrixSize;
    int n = matrixColSize[0];
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (matrix[i - 1][j - 1] != matrix[i][j]) {
                return false;
            }
        }
    }
    return true;
}
