int mySqrt(int x){
    double y = 1;
    for(int i=0; i<20; i++)
    {
        y = y / 2 + x / (2 * y);
    }
    return y;
}
