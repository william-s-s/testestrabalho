#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_int(int max){
    srand(time(NULL));
    return rand() % max;
}

int main(int argc, char *argv[]){
    int result = random_int(atoi(argv[1]));
    printf("%d\n", result);
    return 0;
}
