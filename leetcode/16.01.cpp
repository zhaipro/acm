class Solution {
public:
    vector<int> swapNumbers(vector<int>& numbers) {
        int a = numbers[0];
        int b = numbers[1];
        b ^= a;
        a ^= b;
        b ^= a;
        vector<int> r;
        r.push_back(a);
        r.push_back(b);
        return r;
    }
};
