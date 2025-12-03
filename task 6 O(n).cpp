// ConsoleApplication33.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib> 
#include <ctime>    
using namespace std;

int main() {
    int n;
    cout << "Enter number of coins: ";
    cin >> n;

    if (n < 2) {
        cout << "You need at least 2 coins.\n";
        return 0;
    }

    
    srand(static_cast<unsigned int>(time(nullptr)));

    
    double genuineWeight = 10.0;

    
    double* coins = new double[n];

    
    for (int i = 0; i < n; ++i) {
        coins[i] = genuineWeight;
    }

   
    int realFakeIndex = rand() % n;

   
    bool fakeIsHeavier = (rand() % 2 == 0);

    if (fakeIsHeavier) {
        coins[realFakeIndex] = genuineWeight + 1; 
    }
    else {
        coins[realFakeIndex] = genuineWeight - 1; 
    }

    

   
    double referenceWeight = genuineWeight;
    int detectedFakeIndex = -1;

    for (int i = 0; i < n; ++i) {
        if (coins[i] != referenceWeight) {
            detectedFakeIndex = i;
            break;
        }
    }

    if (detectedFakeIndex == -1) {
        cout << "No imposter detected (all coins have the same weight).\n";
    }
    else {
        cout << " fake coin is coin number " << (detectedFakeIndex + 1) << ".\n";

        if (coins[detectedFakeIndex] > referenceWeight) {
            cout << "The fake coin is HEAVIER than the genuine coins.\n";
        }
        else if (coins[detectedFakeIndex] < referenceWeight) {
            cout << "The fake coin is LIGHTER than the genuine coins.\n";
        }
        else {
            cout << "Fake coin has the same weight as genuine coins.\n";
        }

       
    }

    delete[] coins;
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
