/*
// Problem: Given a maze(2D matrix) with obstacles, starting from (0,0) you have to reach (n-1, n-1). 
// If you are currently on (x,y), 
// you can move to (x+1,y) or (x,y+1). You can not move to the walls.
// Idea: Try all the possible paths to see if you can reach (n-1,n-1)
*/

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1

#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n) {
    if (x < n && y < n && arr[x][y] == 1) {
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solArr) { // * Time complexity: O(3^n)
    if (x == n-1 && y == n-1) { // * base case
        solArr[x][y] = 1;
        return true;
    }

    if (isSafe(arr, x, y, n)) {
        solArr[x][y] = 1; 
        if (ratInMaze(arr, x+1, y, n, solArr)) {
            return true;
        }
        if (ratInMaze(arr, x, y+1, n, solArr)) {
            return true;
        }
        solArr[x][y] = 0; // * backtrack
        return false;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int** arr = new int*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }

    int** solArr = new int*[n];
    for (int i = 0; i < n; i++) {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++) {
            solArr[i][j] = 0;
        }
    }

    cout << endl;

    if (ratInMaze(arr, 0, 0, n, solArr)) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << solArr[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}