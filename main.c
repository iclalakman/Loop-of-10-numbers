#include <stdio.h>

int main() {

    int number=10;

    while ( number>5 ){
        printf("%d, ",number);
        number-=1; }

    printf("\n");

    while ( number>0 ){
        printf("%d, ",number);
        number-=1;
    }
    return 0;
}

