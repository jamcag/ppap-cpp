#include "std_lib_facilities.h"

int main() {
    string previous = " ";
    string current;
    while (std::cin >> current) {
        if (previous == current)
            cout << "repeated word: " << current << "\n";
        previous = current;
    }
}
