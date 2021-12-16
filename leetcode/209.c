int minSubArrayLen(int target, int* nums, int numsSize){
    int r = 2e5;
    int s = 0, e = 0, y = 0;
    for (e = 0; e < numsSize; e++) {
        y += nums[e];
        while(y >= target) {
            r = fmin(e + 1 - s, r);
            y -= nums[s++];
        }
    }
    return r == 2e5?0:r;
}
