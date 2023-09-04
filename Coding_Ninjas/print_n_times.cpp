vector<string> printNTimes(int n) {
	// Write your code here.
	vector<string> s;
	if (n < 1) {
		return s;
	}
	s = printNTimes(n - 1);
	s.emplace_back("Coding Ninjas");
}