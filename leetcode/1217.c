int minCostToMoveChips(int* position, int positionSize){
    int counts[2] = {0};
    for(int i=0; i<positionSize; i++)
    {
        counts[position[i] % 2] ++;
    }
    return fmin(counts[0], counts[1]);
}
