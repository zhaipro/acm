class Solution {
public:
    vector<int> divingBoard(int shorter, int longer, int k) {
        vector<int> r;
        if(k == 0) return r;
        if (shorter == longer) {
            r.push_back(shorter * k);
            return r;
        }
        for(int i=0; i<=k; i++) {
            r.push_back(shorter * (k - i) + longer * i);
        }
        return r;
    }
};
