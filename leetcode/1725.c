int countGoodRectangles(int** rectangles, int rectanglesSize, int* rectanglesColSize){
    int r = 0, max_len = 0;
    for(int i=0; i<rectanglesSize; i++)
    {
        int l = rectangles[i][0], w = rectangles[i][1];
        l = fmin(l, w);
        if (l > max_len) {
            max_len = l;
            r = 1;
        } else if (l == max_len) {
            r ++;
        }
    }
    return r;
}
