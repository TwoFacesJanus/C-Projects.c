#include <stdio.h>

int main(int argc, char *argv[]){
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int len = sizeof(array) / sizeof(array[0]);
    int x = 4;

    for (int i = 0; i < len; i++)
        if (array[i] == x)
            printf("Searched x index: %d", i);
    
    return 0;
}
