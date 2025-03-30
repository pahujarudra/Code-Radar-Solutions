// Your code here...
#include <stdio.h>

int main() {
    int n, target, index = 0, is_printed = 0;
    scanf("%d", &n);
    int arr[n], unique[n]
    for(int i = 0; i < n; i++) {
        scanf("%d ", &arr[i]);
        unique[i] = -1000;
    }
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                for(int k = 0; k < n; k++) {
                    if(arr[i] == unique[k]){
                        is_printed = 1;
                    }
                }
                unique[index] = arr[i];
                index++;
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