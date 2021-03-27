void moveZeroes(int* nums, int numsSize){
    int i, j = 0;
    for(i=0; i<numsSize; i++)
    {
        if(nums[i] != 0) {
            if(i > j) {
                nums[j] = nums[i];
                nums[i] = 0;
            }
            j ++;
        }
    }
}
