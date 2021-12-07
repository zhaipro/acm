/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* exchange(int* nums, int numsSize, int* returnSize){
    int *r = malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int s = 0, e = numsSize;
    for(int i = 0; i < numsSize; i++) {
        if (nums[i] % 2) {
            r[s] = nums[i];
            s ++;
        } else {
            e --;
            r[e] = nums[i];
        }
    }
    return r;
}
