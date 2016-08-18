#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i;
//    int hw = 5, mw = 50;
//    int hd = 5, md = 44;
//    int hw = 0, mw = 0;
//    int hd = 1, md = 0;

    int hw, mw, hd, md;
    scanf("%d:%d", &hw, &mw);
    scanf("%d:%d", &hd, &md);

    int mdiff = mw - md;

    if (mdiff < 0) {
        mdiff = 60 - abs(mdiff);
        hd++;
    }

    int hdiff = hw - hd;
    if (hdiff < 0) {
        hdiff = 24 - abs(hdiff);
    }

    printf("%02d:%02d", hdiff, mdiff);

//    if (hdiff / 10 == 0) {
//        printf("0%d", hdiff);
//    } else {
//        printf("%d", hdiff);
//    }
//    printf(":");
//    if (mdiff / 10 == 0) {
//        printf("0%d", mdiff);
//    } else {
//        printf("%d", mdiff);
//    }



}



