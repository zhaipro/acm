bool canJump(int* nums, int numsSize){
    int r = 0;
    for (int i = numsSize - 2; i >= 0; i--) {
        if (nums[i] >= r + 1) {
            r = 0;
        } else {
            r ++;
        }
    }
    return r == 0;
}
