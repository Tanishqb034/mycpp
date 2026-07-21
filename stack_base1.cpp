#include <iostream>
#include <vector>
#include <stack>

using namespace std;

vector<int> nextGreaterElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n);
    stack<int> st;

    // Array ko peeche se (right to left) loop karenge
    for (int i = n - 1; i >= 0; i--) {
        
        // 1. Stack se chote aur barabar elements ko hatao (pop karo)
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }

        // 2. Agar stack khali ho gayi, matlab aage koi bada number nahi hai
        if (st.empty()) {
            result[i] = -1;
        } else {
            result[i] = st.top(); // Top element hi next greater hai
        }

        // 3. Current element ko stack me daal do
        st.push(arr[i]);
    }

    return result;
}

int main() {
    vector<int> arr = {4, 5, 2, 25};
    vector<int> ans = nextGreaterElement(arr);

    cout << "Original Array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    cout << "Next Greater:   ";
    for (int x : ans) cout << x << " ";
    cout << "\n";

    return 0;
}
