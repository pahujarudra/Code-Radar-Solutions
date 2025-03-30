// Your code here...
int findOccurence(int arr[], int n, int target, char mode) {
    for(int i = 0, j = n - 1; i < n && j >= 0; i++, j--) {
        if(mode == 'F') {
            if(arr[i] == target) {
                return i;
            }
        }
        if(mode =='L') {
            if(arr[j] == target) {
                return j;
            }
        }
    }
    return -1;
}