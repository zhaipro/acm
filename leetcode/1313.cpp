class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> r;
        for(int i=0; i<nums.size(); i+=2) {
            int n, x;
            n = nums[i];
            x = nums[i + 1];
            for(int j=0; j<n; j++) {
            	r.push_back(x);
            }
        }
        return r;
    }
};
