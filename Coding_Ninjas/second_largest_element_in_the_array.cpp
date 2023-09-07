int second_largest(int n, vector<int> a) {
    int largest = a[0];
    int s_largest = -1;

    for (int i = 1; i < n; i += 1) {
        if (a[i] > largest) {
            s_largest = largest;
            largest = a[i];
        }
        else if (a[i] > s_largest && a[i] != largest) {
            s_largest = a[i];
        }
    }

    return s_largest;
}

int second_smallest(int n, vector<int> a) {
    int smallest = a[0];
    int s_smallest = INT_MAX;

    for (int i = 1; i < n; i += 1) {
        if (a[i] < smallest) {
            s_smallest = smallest;
            smallest = a[i];
        }
        else if (a[i] < s_smallest && a[i] != smallest) {
            s_smallest = a[i];
        }
    }

    return s_smallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int s_largest = second_largest(n, a);
    int s_smallest = second_smallest(n, a);
    return {s_largest, s_smallest};
}
