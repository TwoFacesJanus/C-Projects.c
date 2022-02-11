#include <stdio.h>

void Swap(int *max, int *min){
    int buf = *max;
    *max = *min;
    *min = buf;

}

void BubbleSort(int array[], int len){
    int i, j;
    for (i = 0; i < len-1; i++){
        for (j = 0; j < len-i-1; j++){
            if (array[j] > array[j+1])
                Swap(&array[j], &array[j+1]);
        }
    }
}

int main(int argc, char *argv[]){
    int array[] = {1, 6, 7, 4, 1, 3, 5, 9};
    int len = sizeof(array)/sizeof(array[0]);
    
    BubbleSort(array, len);

    for(int i=0; i <= len-1; i++)
        printf("%d ", array[i]);
        
    return 0;

}
