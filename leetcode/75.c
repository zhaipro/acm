void sortColors(int* nums, int numsSize){
    int a = 0, b = 0, c = 0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i] == 0) {
            nums[c++] = 2;
            nums[b++] = 1;
            nums[a++] = 0;
        } else if(nums[i] == 1) {
            nums[c++] = 2;
            nums[b++] = 1;
        } else if(nums[i] == 2) {
            nums[c++] = 2;
        }
    }
}
