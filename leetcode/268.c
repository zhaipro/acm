int missingNumber(int* nums, int numsSize){
    int r = numsSize * (numsSize + 1) / 2;
    for(int i=0; i<numsSize; i++)
    {
        r -= nums[i];
    }
    return r;
}
