class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int p = m + n;
        m--;
        n--;
        while(m >= 0 && n >= 0) {
            p--;
            if (A[m] < B[n]) {
                A[p] = B[n];
                n--;
            } else {
                A[p] = A[m];
                m--;
            }
        }
        while(n >= 0) {
            p--;
            A[p] = B[n];
            n--;
        }
    }
};
