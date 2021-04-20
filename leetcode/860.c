bool lemonadeChange(int* bills, int billsSize){
    int a5 = 0, a10 = 0;
    for(int i=0; i<billsSize; i++) {
        if(bills[i] == 20) {
            if(a10 > 0) {
                a10 --;
                a5 --;
            } else {
                a5 -= 3;
            }

        } else if(bills[i] == 10) {
            a10 ++;
            a5 --;
        } else {
            a5 ++;
        }
        if(a5 < 0 || a10 < 0) {
            return false;
        }
    }
    return true;
}
