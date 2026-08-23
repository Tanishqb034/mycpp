#include <iostream>
#include <string>
#include <algorithm> // Required for std::reverse

int main() {
    std::string text = "hello";
    
    // Reverses the string in-place
    std::reverse(text.begin(), text.end());
    
    std::cout << text; // Output: olleh
     std::cout<<text;
     std::cout<<text;
    return 0;
}
