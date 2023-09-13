#include<map>
int majorityElement(vector<int> v) {
	// Write your code here
	int n = v.size();
    int half = n/2;

	int count1 = 0;
    int el = v[0];
    for (int i = 0; i < n - 1; i++) {
        if (v[i] == el) {
            count1++;
        }
        else {
            count1--;
            if (count1 == 0) {
                el = v[i+1];
            }
        }
    }

    int count2 = 0; 
    for (int i = 0; i < n; i++) {
        if (v[i] == el) {
            count2++;
        }
    }

    if (count2 > half) {
        return el;
    }

}