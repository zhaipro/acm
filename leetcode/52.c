#include <stdio.h>

void put_pop(int n, int x, int y, char *board, int c){
    // x, y 行 列
    for(int i=x; i<n; i++) {
        board[i * n + y] += c;    // 列
        if(y - x + i >= 0 && y - x + i < n) {
            board[i * n + y - x + i] += c;
        }
        if(y + x - i >= 0 && y + x - i < n) {
            board[i * n + y + x - i] += c;
        }
    }
}

int _totalNQueens(int n, int x, char *board){
    int r = 0;
    if(x == n) {
        return 1;
    }
    for(int y=0; y<n; y++) {
        if(board[x * n + y] == 0) {
            put_pop(n, x, y, board, 1);
            r += _totalNQueens(n, x + 1, board);
            put_pop(n, x, y, board, -1);
        }
    }
    return r;
}

int totalNQueens(int n){
    char board[20 * 20] = {0};
    return _totalNQueens(n, 0, board);
}

int main()
{
    int r;
    for(int i=1; i<10; i++) {
        r = totalNQueens(i);
        printf("totalNQueens(%d) == %d\n", i, r);
    }
    return 0;
}
