#include <stdio.h>

int main() {
    
    int length, shift;
    scanf("%d\n", &length);
    int arr[length];
    int arr2[length];
    for(int i = 0; i < length; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &shift);                             // arr2[j] = arr[(j+shift)%length]
    if(shift >= length) {
        shift = (shift % length);
    }
    for(int j = 0; j < length; j++) {
        if ((length - shift + j) < length) {
            arr2[j] = arr[length - shift + j];
        } else {
            arr2[j] = arr[j - shift];
        }        
    }
    for(int k = 0; k < length; k++) {
        printf("%d ", arr2[k]);
    }
    return 0;
}