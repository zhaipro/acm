int search(int* nums, int numsSize, int target){
	int r = 0;
	for (int i = 0; i < numsSize; i++) {
		if (nums[i] == target) r ++;
	}
	return r;
}
