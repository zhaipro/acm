int searchInsert(int* nums, int numsSize, int target){
    int s = 0, e = numsSize - 1;
    int i;
    while(s < e) {
        i = (s + e) / 2;
        if (nums[i] < target) {
            s = i + 1;
        } else if (nums[i] > target) {
            e = i - 1;
        } else {
            return i;
        }
    }
    return target <= nums[s]?s:s+1;
}
