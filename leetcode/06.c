int minCount(int* coins, int coinsSize){
    int r = 0;
    for(int i=0; i<coinsSize; i++)
    {
        r += (coins[i] + 1) / 2;
    }
    return r;
}
