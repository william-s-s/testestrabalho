#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_int(int max){
    srand(time(NULL));
    return rand() % max;
}

int main(int i){
    int result = random_int(i);    
    printf("%d", result);
    return 0;
}