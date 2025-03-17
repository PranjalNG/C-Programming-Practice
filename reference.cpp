#include <iostream>
using namespace std;

int main() {
    int original = 10;
    int &ref = original; // Creating a reference 'ref' to the variable 'original'

    cout << "Original: " << original << "\n"; // Output: Original: 10
    cout << "Reference: " << ref << "\n";     // Output: Reference: 10

    ref = 20; // Modifying the value using the reference
    cout << "Original after modifying through reference: " << original << "\n"; // Output: Original after modifying through reference: 20

    original = 30; // Modifying the original variable
    cout << "Reference after modifying original: " << ref << "\n"; // Output: Reference after modifying original: 30

    return 0;
}
