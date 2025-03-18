#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0], max2 = -1000;
    for(int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    for(int i = 0; i < size; i++) {
        if(arr[i] > max2 && arr[i] < max) {
            max2 = arr[i];
        }
    }
    max2 == -1000 ? printf("-1") : printf("%d", max2);
    return 0;
}