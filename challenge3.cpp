#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the longest string's length
int findLongestLength(const vector<string>& words) {
    int maxLength = 0;
    for (const string& word : words) {
        if (word.length() > maxLength) {
            maxLength = word.length();
        }
    }
    return maxLength;
}

// Function to print the words inside a frame
void printInFrame(const vector<string>& words) {
    int width = findLongestLength(words);

    // Print top border
    cout << string(width + 4, '*') << endl;

    // Print each word
    for (const string& word : words) {
        cout << "* " << word << string(width - word.length(), ' ') << " *" << endl;
    }

    // Print bottom border
    cout << string(width + 4, '*') << endl;
}

int main() {
    vector<string> words;
    int numWords;

    cout << "How many words would you like to enter? ";
    while (!(cin >> numWords) || numWords <= 0) { // Check if input is a positive integer
        cout << "Please enter a valid positive number: ";
    }
    cin.ignore();  // To clear the newline left in the buffer

    for (int i = 0; i < numWords; ++i) {
        cout << "Enter word " << (i + 1) << ": ";
        string word;
        getline(cin, word);  // Using getline to support words with spaces
        words.push_back(word);
    }

    printInFrame(words);

    return 0;
}
