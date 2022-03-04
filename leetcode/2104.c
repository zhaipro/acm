
long long subArrayRanges(int* nums, int numsSize){
    long long r = 0;
    long long mx, mn;
    for (int i = 0; i < numsSize; i++) {
        mx = nums[i];
        mn = nums[i];
        for (int j = i; j < numsSize; j++) {
            mx = fmax(mx, nums[j]);
            mn = fmin(mn, nums[j]);
            r += mx - mn;
        }
    }
    return r;
}
