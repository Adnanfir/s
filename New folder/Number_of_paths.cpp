#include <iostream>
using namespace std;
#define SIZE 3

// Function to print all paths (no dp)
void Print_paths(int array[SIZE][SIZE], int row, int col, string path) {
    if (row >= SIZE || col >= SIZE) return;

    if (row == SIZE - 1 && col == SIZE - 1) {
        path += to_string(array[row][col]);
        cout << path << endl;
        return;
    }

    // Move down
    Print_paths(array, row + 1, col, path + to_string(array[row][col]) + "->");
    // Move right
    Print_paths(array, row, col + 1, path + to_string(array[row][col]) + "->");
}

// Function to count total paths (with dp)
int Count_paths(int row, int col, int dp[SIZE][SIZE]) {
    if (row >= SIZE || col >= SIZE) return 0;
    if (row == SIZE - 1 && col == SIZE - 1) return 1;

    if (dp[row][col] != -1) return dp[row][col];

    int down = Count_paths(row + 1, col, dp);
    int right = Count_paths(row, col + 1, dp);

    return dp[row][col] = down + right;
}

int main() {
    int array[SIZE][SIZE] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout << "All unique paths:\n";
    Print_paths(array, 0, 0, "");

    int dp[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++)
        for (int j = 0; j < SIZE; j++)
            dp[i][j] = -1;

    int totalPaths = Count_paths(0, 0, dp);

    cout << "Total number of unique paths: " << totalPaths << endl;
    return 0;
}
