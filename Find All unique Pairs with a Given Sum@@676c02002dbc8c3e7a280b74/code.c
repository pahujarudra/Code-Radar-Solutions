// Your code here...
#include <stdio.h>

int main() {
    int n, target, index = 0, is_printed = 0;
    scanf("%d", &n);
    int arr[n], unique[n];
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
    }
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                unique[index] = arr[i];
                for(int k = 0; k < n; k++) {
                    if(unique[k] == arr[i]) {
                        is_printed = 1;
                    }
                }
                if(is_printed == 0) {
                    printf("%d %d\n", arr[i], arr[j]);
                }
                arr[i] = -1000;
                arr[j] = -1000;
            }
        }
    }
    return 0;
}