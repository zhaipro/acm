bool isUnique(char* astr){
    int r = 0;
    int c;
    while(*astr) {
        c = 1 << (*astr - 'a');
        if (r & c) {
            return false;
        }
        r |= c;
        astr++;
    }
    return true;
}
