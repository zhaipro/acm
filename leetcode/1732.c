int largestAltitude(int* gain, int gainSize){
    int r = 0, t = 0;
    for(int i=0; i<gainSize; i++)
    {
        t += gain[i];
        if(t > r) {
            r = t;
        }
    }
    return r;
}
