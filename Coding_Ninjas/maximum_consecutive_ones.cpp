#include <bits/stdc++.h> 

int maximum_1(int& count, int& maxi) {
    if (count > maxi) {
        maxi = count;
    }
    
    return maxi;
}
int consecutiveOnes(vector<int>& arr){
    //Write your code here.

    int count = 0;
    int maxi = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 1) {
            count += 1;
            maxi = maximum_1(count, maxi);
        }
        else {
            count = 0;
        }
    }

    return maxi;
}