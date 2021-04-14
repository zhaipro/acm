bool squareIsWhite(char * coordinates){
    int r = coordinates[0] - 'a' + (coordinates[1] - '1') * 9;
    return r % 2;
}
