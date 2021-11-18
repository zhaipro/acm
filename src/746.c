int minCostClimbingStairs(int* cost, int costSize){
    int i = costSize;
    while(i-- > 2) {
        cost[i - 2] += min(cost[i - 1], cost[i]);
    }
    return min(cost[0], cost[1]);
}
