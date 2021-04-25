
double angleClock(int hour, int minutes){
    double r = ((hour % 12) * 60 - minutes * 11 + 720) % 720;
    r = r < 360 ?r:720 - r;
    return r / 2;
}
