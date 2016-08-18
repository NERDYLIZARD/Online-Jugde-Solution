#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//char a[10] = {'+', '-', '+', '-'};
//char b[10] = {'+', '-', '?', '?'};
char a[11];
char b[11];
int answer, count;

int main() {
    int i;

    while (~scanf("%s%s", a, b)) {

        answer = 0;
        for (i = 0; a[i]; i++) {
            answer += a[i] == '+' ? 1 : -1;
        }
//        printf("%d\n", answer);

        int move = 0;
        for (i = 0; b[i]; i++) {
            move += (b[i] == '?');
        }
//        printf("%d\n", move);
        count = 0;
        dfs(0, 0);
        printf("%.12f\n", 1.0 * count / (1 << move));
    }
}

void dfs(int temp, int i) {
    if (b[i] == '\0') {
        if (temp == answer)
            count++;
        return;
    }
    if (b[i] == '-' || b[i] == '?')
        dfs(temp - 1, i + 1);
    if (b[i] == '+' || b[i] == '?')
        dfs(temp + 1, i + 1);
}







