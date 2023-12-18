/*
// 1. Print all possible permutations of a string.
*/

// #include<iostream>
// using namespace std;

// void possiblePermutations(string s1, string ans) { // * Time complexity: O(n!)
//     if (s1.size() == 0) {
//         cout << ans << endl;
//         return;
//     }

//     for (int i = 0; i < s1.size(); i++) {
//         char ch = s1[i];
//         string ros = s1.substr(0, i) + s1.substr(i+1);
//         possiblePermutations(ros, ans+ch);
//     }
// }

// int main() {
//     string s1;
//     cin >> s1;

//     string ans = "";

//     possiblePermutations(s1, ans);

//     return 0;
// }

/////-----/////

/*
// 2. Count the number of paths possible from start point to end point in game-board.

// The provided C++ code is designed to count the number of possible paths from a start 
// point to an end point on a game-board. The game-board consists of positions numbered from 
// the start to the end, and a player can move a certain number of steps (1 to 6) in each move.
*/

// #include<iostream>
// using namespace std;

// int possiblePathsCount(int start, int end) { // * Time complexity: O(6^n), specifically O(6^(end-start))
//     if (start == end) { // * if the start position is equal to the end position, one path is valid
//         return 1;
//     }
//     if (start > end) { // * if start position is greater than the end position, no valid paths are available
//         return 0;
//     }

//     int count = 0;
//     for (int i = 1; i <= 6; i++) {
//         count += possiblePathsCount(start+i, end);
//     }
//     return count;
// }

// int main() {
//     int start, end;
//     cin >> start >> end;

//     cout << possiblePathsCount(start, end) << endl;

//     return 0;
// }

/////-----/////

/*
// 3. Count the number of paths possible in a maze.
*/

// #include<iostream>
// using namespace std;

// int possibleMazePaths(int n, int i, int j) { // * Time complexity: O(2^2n)
//     if (i == n-1 && j == n-1) {
//         return 1;
//     }
//     if (i > n || j > n) {
//         return 0;
//     }

//     return possibleMazePaths(n, i+1, j) + possibleMazePaths(n, i, j+1);
// }

// int main() {
//     int n;
//     cin >> n;

//     int i=0, j=0;

//     cout << possibleMazePaths(n, i, j) << endl;

//     return 0;
// }

/////-----/////

/*
// 4. Given a '2 x n' board and tiles of size '2 x 1', count the number of ways to tile the given board using these tiles.
*/

// #include<iostream>
// using namespace std;

// int tilingWays(int n) { // * Time complexity: O(2^n)
//     if (n == 0) {
//         return 0;
//     }
//     if (n == 1) {
//         return 1;
//     }
//     return tilingWays(n-1) + tilingWays(n-2); // * 'n-1' if tiles are placed horizontally and 'n-2' if place vertically
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << tilingWays(n) << endl;

//     return 0;
// }

/////-----/////

/*
// 5. Friends pairing problem - Find the number of ways in which n friends can remain single or can be paired up.
*/

// #include<iostream>
// using namespace std;

// int friendsPairing(int n) { // * Time complexity: O(2^n)
//     if (n == 0 || n == 1 || n == 2) {
//         return n;
//     }
//     return friendsPairing(n-1) + friendsPairing(n-2)*(n-1);
// }

// int main() {
//     int n;
//     cin >> n;

//     cout << friendsPairing(n) << endl;

//     return 0;
// }

/////-----/////
/*
// 6. Knapsack problem - Put n items with given weight and value in a knapsack of capacity W ot get the maximum total value in the knapsack.
*/

#include<iostream>
using namespace std;

int knapsack(int val[], int wt[], int n, int W) { // * Time complexity: O(2^n)
    if (n == 0 || W == 0) {
        return 0;
    }
    if (wt[n-1] > W) {
        return knapsack(val, wt, n-1, W);
    }
    return max(knapsack(val, wt, n-1, W-wt[n-1])+val[n-1], knapsack(val, wt, n-1, W));
}   



int main() {
    int n = 3;
    int val[] = {100, 50, 150};
    int wt[] = {10, 20, 30};
    int W = 50;

    cout << knapsack(val, wt, n, W) << endl;

    return 0;
}