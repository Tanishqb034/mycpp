#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// 1. Function to find Next Greater Element
vector<int> nextGreaterElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    stack<int> st;

    // Right to Left loop
    for (int i = n - 1; i >= 0; i--) {
        // POP Rule: Jab tak stack ka top chota ya barabar hai, nikalte jao
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // ANSWER Rule: Agar stack khali nahi hai, toh top hi answer hai
        if (st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top();
        }

        // PUSH Rule: Har element ko stack me daalna hi hai
        st.push(arr[i]);
    }
    return result;
}

// 2. Function to find Next Smaller Element
vector<int> nextSmallerElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    stack<int> st;

    // Right to Left loop
    for (int i = n - 1; i >= 0; i--) {
        // POP Rule: Jab tak stack ka top bada ya barabar hai, nikalte jao
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        // ANSWER Rule
        if (st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top();
        }

        // PUSH Rule
        st.push(arr[i]);
    }
    return result;
}

// Function to print vectors easily
void printVector(const vector<int>& vec) {
    for (int x : vec) {
        cout << x << " ";
    }
    cout << "\n";
}

int main() {
    vector<int> arr = {4, 5, 2, 25};

    cout << "--- INPUT ARRAY ---" << endl;
    cout << "Original:       ";
    printVector(arr);
    cout << "-------------------" << endl;

    // Running Next Greater
    vector<int> greaterAns = nextGreaterElement(arr);
    cout << "Next Greater:   ";
    printVector(greaterAns); // Output: 5 25 25 -1

    // Running Next Smaller
    vector<int> smallerAns = nextSmallerElement(arr);
    cout << "Next Smaller:   ";
    printVector(smallerAns); // Output: 2 2 -1 -1

    return 0;
}
