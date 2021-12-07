/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    // 谁出的题！
    *returnSize = 0;
    if (matrixSize == 0 || matrixColSize[0] == 0) return 0;

    int m = matrixSize, n = matrixColSize[0];
    int x = -1, y = 0;
    int s = 0, s1 = 1, s2 = 0, t;
    int *r = malloc(m * n * sizeof(int));
    *returnSize = m * n;
    while (m && n) {
        for (int i = 0; i < n; i++) {
            x += s1;
            y += s2;
            r[s] = matrix[y][x];
            s ++;
        }
        t = s1;
        s1 = -s2;
        s2 = t;
        t = m - 1;
        m = n;
        n = t;
    }
    return r;
}
