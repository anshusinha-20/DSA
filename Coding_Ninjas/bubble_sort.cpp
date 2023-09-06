void bubbleSort(vector<int> &arr, int n) 
{
    //write your code here
    for (int i = n; i > 1; i -= 1) {
        int swapped = 0;
        for (int j = 0; j < i-1; j += 1) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if (swapped == 0) {
            break;
        }
    }
}