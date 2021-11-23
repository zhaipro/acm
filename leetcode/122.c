int maxProfit(int* prices, int pricesSize){
    int r = 0;
    for (int i = pricesSize - 2; i >= 0; i--) {
        r += fmax(prices[i + 1] - prices[i], 0);
    }
    return r;
}
