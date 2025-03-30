// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    int max = arr[0], max2 = -1000;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max2 = max;
            max = arr[i];
        }
        if(arr[i] > max2 && arr[i] < max) {
            max2 = arr[i];
        }
    }
    printf("%d", max * max2);
    return 0;
}