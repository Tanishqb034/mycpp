#include <iostream>
#include <string>
#include <algorithm> // For std::reverse
#include <unordered_map> // For std::unordered_map

int main() {
    std::string text = "apple";
    std::cout << "Original String: " << text << "\n";

    // 1. Calculate Element (Character) Frequency
    // Stores character as key and frequency count as value
    std::unordered_map<char, int> frequencyMap;
    for (char ch : text) {
        frequencyMap[ch]++;
    }

    // Print frequencies
    std::cout << "Character Frequencies:\n";
    for (auto const& [character, count] : frequencyMap) {
        std::cout << "'" << character << "' : " << count << "\n";
    }

    // 2. Reverse the String In-Place
    // Mutates the original string by swapping characters from both ends
    std::reverse(text.begin(), text.end());
    
    std::cout << "Reversed String: " << text << "\n";

    return 0;
}
