int maxSubArray(int* nums, int numsSize){
    int r = -101;
    int c = 0;
    for (int i = 0; i < numsSize; i++) {
        c += nums[i];
        if (c > r) {
            r = c;
        }
        if (c < 0) {
            c = 0;
        }
    }
    return r;
}
