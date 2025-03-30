// Your code here...
int kthSmallest(int arr[], int n, int k) {
    int min = arr[0], minindex = -1, temp;
    while(k > 0) {
        for(int i = 0; i < n; i++) {
            if(arr[i] < min) {
                min = arr[i];
                minindex = i;
            }
        }
        temp = arr[minindex];
        arr[minindex] = 1000;
        k--;
    }
    return temp;
}