#include <iostream>
using namespace std;

int main() {
    int r = 2, c = 3;
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int transpose[3][2];

    for(int i = 0; i < r; ++i) {
        for(int j = 0; j < c; ++j) {
            transpose[j][i] = matrix[i][j];
        }
    }
    // Result: {{1, 4}, {2, 5}, {3, 6}}
    return 0;
}
