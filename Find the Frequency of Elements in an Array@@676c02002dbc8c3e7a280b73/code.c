#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int arr[size], arr2[size * 2];
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < size; i++) {
        int count = 0;
        for(int j = i; j >= 0; j++) {
            int flag = 0;
            if(arr[i] == arr[j]);
            flag = 1;
            break;
        }
        if(flag) continue;
        for(int j = 0; j < size; j++) {
            if(arr[i] == arr[j]) count++;
        }
        printf("%d %d\n", arr[i], count);
    }
    return 0;
}