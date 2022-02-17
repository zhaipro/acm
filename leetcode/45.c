
int jump(int* nums, int numsSize){
    int i = 0;  // 扫描
    int j = 0;  // 当前
    int k = 0;  // 下一步的最优解
    int r = 0;
    for (i = 1; i < numsSize; i++) {
        if (i > j + nums[j]) {
            j = k;
            r ++;
        }
        if (nums[i] + i > nums[k] + k) {
            k = i;
        }
    }
    return r + (numsSize > 1);
}
