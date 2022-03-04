#include <stdio.h>
#include <stdlib.h>

int random_int(int max){
    return rand() % max;
}

int main(int i){    
    printf("%d", random_int(i));
    return 0;
}