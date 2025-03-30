// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int max = arr[0], max2 = -1000, min = arr[0], min2 = 1000;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max2 = max;
            max = arr[i];
        }
        if(arr[i] > max2 && arr[i] < max) {
            max2 = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] < min) {
            min2 = min;
            min = arr[i];
        }
        if(arr[i] < min2 && arr[i] > min) {
            min2 = arr[i];
        }
    }
    (min * min2) >= (max * max2) ? printf("%d", min * min2) : printf("%d", max * max2);
    return 0;
}