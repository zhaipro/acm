int findNumbers(int* nums, int numsSize){
    int r = 0, t, c;
    for(int i=0; i<numsSize; i++)
    {
        t = nums[i];
        c = 0;
        while(t)
        {
            t /= 10;
            c ++;
        }
        if(c % 2 == 0) {
            r ++;
        }
    }
    return r;
}
