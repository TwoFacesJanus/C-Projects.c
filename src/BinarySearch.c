#include <stdio.h>

int BinarySearch(int array[], int l, int r, int x)
{
    if (r >= l) {
        int middle = l + (r - l) / 2;

        if (array[middle] == x)
            return middle;
  
        if (array[middle] > x)
            return BinarySearch(array, l, middle - 1, x);
  
        return BinarySearch(array, middle + 1, r, x);
    }
  
    return -1;
}
  
int main(int argc, char* argv[])
{
    int array[] = {3, 4, 5, 12};
    int n = sizeof(array) / sizeof(array[0]);
    int x = 3;
    int result = BinarySearch(array, 0, n - 1, x);
    (result == -1)
        ? printf("Not Found!")
        : printf("Element is present at index %d", result);
    return 0;
}
