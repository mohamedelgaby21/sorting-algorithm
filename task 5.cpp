// task 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter n (number of dark disks and number of light disks): ";
    cin >> n;

    int size = 2 * n;   
    vector<char> disks(size);

    
    for (int i = 0; i < size; ++i) {
        if (i % 2 == 0)
            disks[i] = 'D';  
        else
            disks[i] = 'L';  
    }

    
    cout << "Initial configuration: ";
    for (char c : disks) cout << c << " ";
    cout << "\n";

    long long moves = 0;   

    
    for (int pass = 0; pass < size; ++pass) { 
        for (int i = 0; i < size - 1; ++i) {  
            
            if (disks[i] == 'D' && disks[i + 1] == 'L') {
                swap(disks[i], disks[i + 1]); 
                moves++;                      
            }
        }
    }

    
    cout << "Final configuration:   ";
    for (char c : disks) cout << c << " ";
    cout << "\n";

   
    cout << "Total number of swaps (moves): " << moves << "\n";

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
