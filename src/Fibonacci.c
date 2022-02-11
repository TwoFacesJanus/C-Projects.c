#include <stdio.h>
#include <stdlib.h>

int Fibonacci(int X){
    if (X == 1 || X == 2)
        return 1;
    return Fibonacci(X-1) + Fibonacci(X-2);
}

int main(int argc, char *argv[]){
    int X = atoi(argv[argc-1]);

    for(int i = 1; i <= X; i++)
        printf("%d ", Fibonacci(i));
    printf("\n");

    return 0;
}
