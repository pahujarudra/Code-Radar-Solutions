#include <stdio.h>

int main() {
    int length, flag = 1, max;
    scanf("%d", &length);
    int arr[length];
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for(int i = 1; i < length; i++) {
        if(arr[i] >= max) {
        max = arr[i];
        flag = 1;
        }
        else
        flag = 0;
    }
    flag ? printf("%s", "Sorted") : printf("%s", "Not Sorted");
    return 0;
}