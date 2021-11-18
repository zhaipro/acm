void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    int i = m + n - 1;
    int j = m - 1;
    int k = n - 1;
    for(; j >= 0 && k >= 0; i--) {
        if (nums1[j] < nums2[k]) {
            nums1[i] = nums2[k];
            k --;
        } else {
            nums1[i] = nums1[j];
            j --;
        }
    }
    for(; k >= 0; i--) {
        nums1[i] = nums2[k];
        k --;
    }
}
