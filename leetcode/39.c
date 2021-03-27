int majorityElement(int* nums, int numsSize){
    int num = nums[0], count = 0;
    for(int i=0; i<numsSize; i++)
    {
        if(num == nums[i]) {
            count ++;
        } else {
            count --;
            if(count < 0) {
                count = 1;
                num = nums[i];
            }
        }
    }
    return num;
}
