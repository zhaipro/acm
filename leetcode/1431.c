/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    bool *r = malloc(sizeof(bool) * candiesSize);
    int m = 0;
    *returnSize = candiesSize;
    for(int i=0; i<candiesSize; i++)
    {
        if(candies[i] > m) {
            m = candies[i];
        }
    }
    for(int i=0; i<candiesSize; i++)
    {
        r[i] = candies[i] + extraCandies >= m;
    }
    return r;
}
