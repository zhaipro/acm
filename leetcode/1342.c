int numberOfSteps (int num){
    int r = 0;
    while(num)
    {
        if(num & 1) {
            num --;
        } else {
            num >>= 1;
        }
        r ++;
    }
    return r;
}
