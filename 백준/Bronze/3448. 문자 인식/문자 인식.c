#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int n;
    char test;
    scanf("%d", &n);

    while(n--){
        int R = 0, A = 0, X, count = 0;

        while(1){
            test = getchar();

            if (test == '\n'){
                count++;
                if (count == 2) break;
                else continue;
            }
            else count = 0;

            A++;
            if (test != '#') R++;
        }

        X = (10000*R/A + 5) / 10;
        printf("Efficiency ratio is %d", X/10);
        X %= 10;
        if (X > 0) printf(".%d", X);
        printf("%%.\n");
    }
}