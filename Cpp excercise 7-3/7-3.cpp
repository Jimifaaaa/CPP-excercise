#include <iostream>
#include <fstream>
#include <cctype>
#include <vector>
#include<string>

int main() {
    // Array to store counts for each letter
    std::vector<int> letterCounts(26, 0);

    // Prompt the user for text
    std::cout << "Enter some text (press Enter to finish): " << std::endl;
    std::string text;
    std::getline(std::cin, text);

    // Write the input text to a file
    std::ofstream outFile("input.txt");
    if (!outFile) {
        std::cerr << "Error creating the file." << std::endl;
        return 1;
    }
    outFile << text;
    outFile.close();

    // Open the file to process its content
    std::ifstream inFile("input.txt");
    if (!inFile) {
        std::cerr << "Error opening the file." << std::endl;
        return 1;
    }

    char ch;
    while (inFile.get(ch)) {
        // Convert character to lowercase for case insensitivity
        if (std::isalpha(ch)) {
            ch = std::tolower(ch);
            letterCounts[ch - 'a']++;
        }
    }
    inFile.close();

    // Display the counts of each letter
    std::cout << "\nLetter counts:\n";
    for (int i = 0; i < 26; ++i) {
        char letter = 'a' + i;
        std::cout << letter << ": " << letterCounts[i] << std::endl;
    }

    return 0;
}
