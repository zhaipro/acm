int rob(int* nums, int numsSize){
    int r1, r2, rt;
    r1 = 0;
    r2 = nums[0];
    for(int i=1; i<numsSize; i++)
    {
        rt = fmax(nums[i] + r1, r2);
        r1 = r2;
        r2 = rt;
    }
    return r2;
}
