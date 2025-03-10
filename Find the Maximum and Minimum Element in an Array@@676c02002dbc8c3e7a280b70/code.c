#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], min = arr[0];
    for(int i = 1; i < size; i++) {
        arr[i] > max ? max = arr[i] : ;
        arr[i] < min ? min = arr[i] : ;
    }
    printf("%d%d", min, max);
    return 0;
}