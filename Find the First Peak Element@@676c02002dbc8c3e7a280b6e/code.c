#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i - 1] > arr[i]) {
            max = arr[i - 1];
            break;
        }
        else if(arr[i] > arr[i - 1]){
            max = arr[i];
        }
        else {
            max = -1;
        }
    }
    printf("%d", max);
    return 0;
}