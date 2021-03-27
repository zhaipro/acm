int maxArea(int* height, int heightSize){
    int l = 0, r = heightSize - 1;
    int ans = 0, t;
    while(l < r)
    {
        t = fmin(height[l], height[r]) * (r - l);
        ans = fmax(ans, t);
        if (height[l] <= height[r]) {
            ++l;
        }
        else {
            --r;
        }
    }
    return ans;
}
