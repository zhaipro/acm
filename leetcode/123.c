
int maxDrop(int *prices, int pricesSize) {

}

int maxProfit(int* prices, int pricesSize){
    if (pricesSize == 1) return 0;
    if (pricesSize == 2) {
        return fmax(prices[1] - prices[0], 0);
    }
    int min = 100000, max = 0;
    int r;
    for (int i = 0; i < pricesSize; i++) {
        if (prices[i] < min) {
            min = prices[i];
            max = prices[i];
        }
        if (prices[i] > max) {
            max = prices[i];
        }
    }
}
