//============================================================================
// Name        : Lab4.cpp
// Author      : Justin Dejesus
// Description : Pointers
//============================================================================

#include<iostream>

using namespace std;

float findAverage(float num[], int n);
float findMax(float num[], int n);
float findMin(float num[], int n);


float findAverage(float num[], int n) {
    float total = 0;
    for (int i = 0;i < n;i++) {
        total += num[i];
    }
    return(total / n);
}
float findMax(float num[], int n) {
    float max = num[0];
    for (int i = 1;i < n;i++) {
        if (max < num[i])
            max = num[i];
    }
    return max;
}

float findMin(float num[], int n) {
    float min = num[0];
    for (int i = 1;i < n;i++) {
        if (min > num[i])
            min = num[i];
    }
    return min;
}
int main() {

    float* UsrInputPtr = new float[100];
    float* NumStartPtr = new float[100];
    int counter = 0;

    cout << "Input as many numbers as you want:\n";
    cout << "Input 999999 to end the input:\n";
    cin >> *UsrInputPtr;
    NumStartPtr = UsrInputPtr;

    while (*UsrInputPtr != 999999) {
        counter++;
        UsrInputPtr++;
        cin >> *UsrInputPtr;
    }
    cout << "Number of valid numbers inputed: " << counter << "\n";
    cout << "\Inputed number and the address\n";
    for (int j = 0;j < counter;j++) {
        cout << *(NumStartPtr + j) << " -------> " << (NumStartPtr + j) << "\n";
    }

    float average = findAverage(NumStartPtr, counter);
    float myMax = findMax(NumStartPtr, counter);
    float myMin = findMin(NumStartPtr, counter);

    cout << "\nAverage: " << average << "\n";
    cout << "Maximum: " << myMax << "\n";
    cout << "Minimum: " << myMin << "\n";

    return 0;
}
