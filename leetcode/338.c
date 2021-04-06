/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countBits(int num, int* returnSize){
    *returnSize = num + 1;
    int *r = malloc(sizeof(int) * (*returnSize));
    r[0] = 0;
    for(int i=1; i<=num; i++)
    {
        r[i] = r[i >> 1] + (i & 1);
    }
    return r;
}
