#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int arr[num];
    for(int i = 0; i < num; i++) {
        scanf("%d", &arr[i - 1]);
    }
    int max = arr[0];
    for(int i = 1; i < num; i++) {
        if(arr[i - 1] > arr[i]) {
            max = arr[i - 1];
            break;
        }
        else {
            max = arr[i];
        }
    }
    printf("%d", max);

}