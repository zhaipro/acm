// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    // (s, e]
    int s = 0, e = n;
    int t;
    while(s + 1 < e) {
        t = (s + 1) / 2 + e / 2;
        if (isBadVersion(t)) {
            e = t;
        } else {
            s = t;
        }
    }
    return e;
}
