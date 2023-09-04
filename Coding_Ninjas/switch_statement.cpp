#include<cmath>
double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double pi = M_PI;

	switch (ch) {
		case 2:
			return a[0] * a[1];
			break;
		case 1:
			return pi * a[0] * a[0];
			break;
	}
}
