#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    double A, B, C;
    double w = 10.0;

    
    int fake = rand() % 3;    
    bool heavier = rand() % 2;

   
    A = B = C = w;
    if (fake == 0) A = heavier ? w + 1 : w - 1;
    if (fake == 1) B = heavier ? w + 1 : w - 1;
    if (fake == 2) C = heavier ? w + 1 : w - 1;

    
    if (A == B && C != A) {
        cout << "Fake coin is C and it is " << (C > A ? "HEAVIER.\n" : "LIGHTER.\n");
    }
    else if (A == C && B != A) {
        cout << "Fake coin is B and it is " << (B > A ? "HEAVIER.\n" : "LIGHTER.\n");
    }
    else {
        cout << "Fake coin is A and it is " << (A > B ? "HEAVIER.\n" : "LIGHTER.\n");
    }

    return 0;
}

