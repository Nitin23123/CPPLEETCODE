#include <iostream>
#include <vector>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size();
    int n = matrix[0].size();

    // Step 1: Mark rows and columns to be zeroed
    vector<bool> rows(m, false);
    vector<bool> cols(n, false);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    // Step 2: Set marked rows to 0
    for (int i = 0; i < m; i++) {
        if (rows[i]) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Set marked columns to 0
    for (int j = 0; j < n; j++) {
        if (cols[j]) {
            for (int i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 0, 7, 8},
        {9, 10, 11, 12}
    };

    cout << "Original Matrix:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    setZeroes(matrix);

    cout << "\nMatrix after applying setZeroes:\n";
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
