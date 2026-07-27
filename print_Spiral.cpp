#include <iostream>
#include <vector>
using namespace std;

void printSpiral(vector<vector<int>>& mat) {
    int r = mat.size(), c = mat[0].size();
    int top = 0, bottom = r - 1, left = 0, right = c - 1;

    while(top <= bottom && left <= right) {
        for(int i = left; i <= right; ++i) cout << mat[top][i] << " ";
        top++;
        for(int i = top; i <= bottom; ++i) cout << mat[i][right] << " ";
        right--;
        if(top <= bottom) {
            for(int i = right; i >= left; --i) cout << mat[bottom][i] << " ";
            bottom--;
        }
        if(left <= right) {
            for(int i = bottom; i >= top; --i) cout << mat[i][left] << " ";
            left++;
        }
    }
}
