// Time complexity - o(nlogn), space compexity - o(1)
void merge(vector<int>& arr, int l, int mid, int r) {
    vector<int> temp;
    int left = l;
    int right = mid + 1;

    while (left <= mid && right <= r) {
        if (arr[left] <= arr[right]) {
            temp.emplace_back(arr[left]);
            left += 1;
        }
        else {
            temp.emplace_back(arr[right]);
            right += 1;
        }
    }

    while (left <= mid) {
        temp.emplace_back(arr[left]);
        left += 1;
    }

    while (right <= r) {
        temp.emplace_back(arr[right]);
        right += 1;
    }

    for (int i = l; i <= r; i += 1) {
        arr[i] = temp[i - l];
    }
}

void mergesort(vector<int>& arr, int l, int r) {
    if (l >= r) {
        return;
    }

    int mid = (l + r) / 2;
    mergesort(arr, l, mid);
    mergesort(arr, mid+1, r);
    merge(arr, l, mid, r);
}

void mergeSort(vector<int>& arr, int n) {
    // Write Your Code Here
    mergesort(arr,0,arr.size()-1);
}