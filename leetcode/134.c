int canCompleteCircuit(int* gas, int gasSize, int* cost, int costSize){
    int r = 0, g = 0;
    for(int i = 0; i < gasSize; i ++) {
        g += gas[i] - cost[i];
    }
    if(g < 0) {
        return -1;
    }
    g = 0;
    for(int i = 0; i < gasSize; i ++) {
        g += gas[i] - cost[i];
        if(g < 0) {
            r = i + 1;
            g = 0;
        }
    }
    return r;
}
