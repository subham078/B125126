//q.6. Podcast Duration Analyzer

#include <iostream>
using namespace std;

void findLongest(int *duration, int n) {
    int longest = *duration;
    for (int *ptr = duration + 1; ptr < duration + n; ptr++) {
        if (*ptr > longest) {
            longest = *ptr;
        }
    }

    cout << "Longest episode duration: " << longest << " minutes" << endl;
}

int main() {
    int duration[6];

    cout << "Enter duration of 6 episodes:\n";

    for (int i = 0; i < 6; i++) {
        cin >> duration[i];
    }

    findLongest(duration, 6);

    return 0;
}
