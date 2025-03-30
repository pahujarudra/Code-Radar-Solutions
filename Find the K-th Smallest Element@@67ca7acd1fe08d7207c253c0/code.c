// Your code here...
int kthSmallest(int arr[], int n, int k) {
    int temp;
    while(k > 0) {
        int min = arr[0];
        for(int i = 0; i < n; i++) {
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        temp = min;
        min = 1000;
        k--;
    }
    return temp;
}