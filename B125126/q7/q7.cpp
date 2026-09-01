#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char sentence[200];
    cout << "Enter a sentence: ";
    cin.getline(sentence, 200);
    char *ptr = sentence;
    int digits = 0;
    int alphabets = 0;
    int spaces = 0;
    while (*ptr != '\0') {
        if (isdigit(*ptr)) {
            digits++;
        }
        else if (isalpha(*ptr)) {
            alphabets++;
        }
        else if (*ptr == ' ') {
            spaces++;
        }
        ptr++;
    }

    cout << "\nNumber of digits: " << digits << endl;
    cout << "Number of alphabetic characters: " << alphabets << endl;
    cout << "Number of spaces: " << spaces << endl;
    return 0;
}
