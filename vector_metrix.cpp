#include <iostream>
#include <vector>

// Allows omitting 'std::' for the rest of this file
using namespace std;

vector<double> multiplyMatrixVector(const vector<vector<double>>& matrix, 
                                     const vector<double>& vec) {
    int rows = matrix.size();
    int cols = matrix[0].size();
    
    vector<double> result(rows, 0.0);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i] += matrix[i][j] * vec[j];
        }
    }
    return result;
}

int main() {
    // 2x3 Matrix
    vector<vector<double>> matrix = {
        {1.0, 2.0, 3.0},
        {4.0, 5.0, 6.0}
    };

    // 3x1 Column Vector
    vector<double> vec = {1.0, 2.0, 3.0};

    vector<double> result = multiplyMatrixVector(matrix, vec);

    // Prints: 14 32
    cout << "Result Vector: ";
    for (double val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
