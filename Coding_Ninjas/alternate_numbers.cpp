vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int> result(n, 0);
    
    int pos_pos = 0;
    int neg_pos = 1;

    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            result[pos_pos] = a[i];
            pos_pos += 2;
        }
        else if (a[i] < 0) {
            result[neg_pos] = a[i];
            neg_pos += 2;
        }
    }

    return result;
}