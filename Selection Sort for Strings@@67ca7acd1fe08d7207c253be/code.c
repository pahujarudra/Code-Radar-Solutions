// Your code here...
#include <string.h>

void selectionSort(char arr[][100], int n) {
    for(int i = 0; i < n - 1; i++) {
        int min = i;
        for(int j = i + 1; j < n; j++) {
            if(strcmp(arr[j], arr[min]) < 0) {
                min = j;
            }
        }
        char temp[];
        strcpy(temp, arr[i]);
        strcpy(arr[i], arr[min]);
        strcpy(arr[min], temp);
    }
}

void printArray(char arr[][100], int n) {
    for(int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
}