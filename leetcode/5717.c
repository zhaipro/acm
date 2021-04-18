int minOperations(int* nums, int numsSize){
    int r = 0, p = nums[0];
    for(int i=1; i<numsSize; i++)
    {
        if (nums[i] <= p) {
            p ++;
            r += p - nums[i];
        } else {
            p = nums[i];
        }
    }
    return r;
}
