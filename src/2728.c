#include <stdio.h>


int main()
{
    int w, h, W, H, t;
    while(scanf("%d %d %d %d", &w, &h, &W, &H) && w)
    {
        if(h > w) {
            t = w;
            w = h;
            h = t;
        }
        if(H > W) {
            t = W;
            W = H;
            H = t;
        }
        if(w * H < h * W) {
            t = 100 * H / h;
        } else {
            t = 100 * W / w;
        }
        if(t > 100)
            t = 100;
        printf("%d%%\n", t);
    }
    return 0;
}
