int maxProfit(int* prices, int pricesSize){
    int s = prices[0], r, m = 0;
    for(int i=1; i<pricesSize; i++)
    {
        r = prices[i] - s;
        if(r < 0) {
            s = prices[i];
            continue;
        }
        if(r > m) {
            m = r;
        }
    }
    return m;
}
