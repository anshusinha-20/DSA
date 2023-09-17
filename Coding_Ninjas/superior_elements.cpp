vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    vector<int> result;
    int maxi = INT_MIN;

    for (int i = n-1; i >= 0; i--) {
        if (a[i] > maxi) {
            maxi = a[i];
            result.emplace_back(maxi);
        }
    }

    return result;
}