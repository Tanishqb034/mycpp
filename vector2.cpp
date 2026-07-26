#include <iostream>
#include <vector>
#include <stdexcept>

using std::cout;
using std::endl;
using std::vector;
using std::invalid_argument;

vector<double> multiplyMatrixVector(const vector<double>& matrix, 
                                     int rows, 
                                     int cols, 
                                     const vector<double>& vec) {
    
    if (matrix.size() != static_cast<size_t>(rows * cols)) {
        throw invalid_argument("Error: Actual matrix size does not match rows * cols dimensions.");
    }

    if (static_cast<size_t>(cols) != vec.size()) {
        throw invalid_argument("Error: Matrix columns must match Vector size for multiplication.");
    }

    vector<double> result(rows, 0.0);

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i] += matrix[i * cols + j] * vec[j];
        }
    }

    return result;
}

int main() {
    vector<double> matrix = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0};
    int rows = 2;
    int cols = 3;

    vector<double> vec = {1.0, 2.0, 3.0};

    try {
        vector<double> result = multiplyMatrixVector(matrix, rows, cols, vec);

        cout << "Result Vector: ";
        for (double val : result) {
            cout << val << " ";
        }
        cout << endl;

    } catch (const invalid_argument& e) {
        cout << e.what() << endl;
        return 1;
    }

    return 0;
}
