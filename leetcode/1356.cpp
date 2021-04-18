
int count_one(int a){
    int r=0;
    while(a) a=a&(a-1),r++;
    return r;
}

class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        struct {
            bool operator()(int a, int b) const {
                int numa=count_one(a),numb=count_one(b);
                return  numa!=numb?numa<numb:a<b;
            }
        } cmp;
        sort(arr.begin(), arr.end(), cmp);
        return arr;
    }
};
