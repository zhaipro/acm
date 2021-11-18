bool isRectangleOverlap(int* rec1, int rec1Size, int* rec2, int rec2Size){
    // rec1 = [0,0,2,2], rec2 = [1,1,3,3]
    int r1x1 = rec1[0];
    int r1y1 = rec1[1];
    int r1x2 = rec1[2];
    int r1y2 = rec1[3];

    int r2x1 = rec2[0];
    int r2y1 = rec2[1];
    int r2x2 = rec2[2];
    int r2y2 = rec2[3];

    int x1 = fmax(r1x1, r2x1);
    int x2 = fmin(r1x2, r2x2);
    int y1 = fmax(r1y1, r2y1);
    int y2 = fmin(r1y2, r2y2);

    return x2 > x1 && y2 > y1;
}
