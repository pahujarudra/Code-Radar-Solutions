#include <stdio.h>

int main() {
    int size, shift;
    scanf("%d", &size);
    int arr[size], arr2[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", shift);
    for(int i = 0; i < size; i++) {
        if(i + shift < size) {
            arr2[i + shift] = arr[i];
        }
        else {
            arr2[i - shift - 1] = arr[i];
        }
    }
    for(int i = 0; i < size; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}