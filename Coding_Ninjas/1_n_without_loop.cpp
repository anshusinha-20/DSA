vector<int> printNos(int x) {
    // Write Your Code Here
    vector<int> result;
    if (x < 1) {
        return result;
    }
    result = printNos(x - 1);
    result.emplace_back(x);
}