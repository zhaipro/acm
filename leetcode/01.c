int game(int* guess, int guessSize, int* answer, int answerSize){
    int r = 0;
    for(int i=0; i<guessSize; i++)
    {
        if(guess[i] == answer[i]) {
            r ++;
        }
    }
    return r;
}
