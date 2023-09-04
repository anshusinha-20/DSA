void n_1(int i, vector<int> &vec) {
    if (i < 1) {
        return;
    }
    vec.emplace_back(i);
    n_1(i - 1, vec);
}

vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> vi;
    n_1(x, vi);
    return vi;
}