// Your code here...
#include <stdio.h>

int main() {
    int n, index = 0;
    scanf("%d", &n);
    int arr[n], arr2[n] = {0};
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    for(int i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr2[index++] = arr[i];
        }
    }
    for(int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    return 0;
}
