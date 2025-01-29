
#include <bits/stdc++.h>
using namespace std;

void printBinary(int n, int bits) {
    // Print binary representation of n in the specified number of bits
    for (int i = bits - 1; i >= 0; --i) {
        cout << ((n >> i) & 1); // Print each bit
    }
    cout << endl;
}

int main() {
    int n ;
    cout<<endl<<"Enter a number to get binary digit ...."<<endl;
    cin>>n;
    int bits = 8; // Number of bits for representation

    cout << "Input number: " << n << endl;

    // Step 1: Calculate the absolute value
    int absValue = abs(n);
    cout << "Absolute value: " << absValue << endl;

    // Step 2: Convert absolute value to binary
    cout << "Binary of absolute value: ";
    printBinary(absValue, bits); // Print binary of absolute value

    // Step 3: Invert the bits (1's complement)
    int inverted = ~absValue & ((1 << bits) - 1); // Invert bits and mask to keep only the last 'bits' bits
    cout << "Inverted Binary (1's complement): ";
    printBinary(inverted, bits); // Print inverted binary

    // Step 4: Add 1 to get the 2's complement
    int twosComplement = inverted + 1;
    cout << "Two's Complement (after adding 1): ";
    printBinary(twosComplement, bits); // Print two's complement

    return 0;
}