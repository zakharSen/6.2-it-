#include <iostream>
#include <algorithm>
using namespace std;

void generateArray(int arr[], int size, int min, int max) {
    for (int i = 0; i < size; i++) {
        arr[i] = min + rand() % (max - min + 1);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
        if (i < size - 1) {
            cout << " ";
        }
    }
    cout << endl;
}

void sortDescending(int arr[], int size) {
    sort(arr, arr + size, greater<int>());
}

int main() {

    srand(static_cast<unsigned>(time(nullptr)));
    const int arrSize = 10;
    int t[arrSize];

    generateArray(t, arrSize, -22, 37);

    cout << "Original array: ";
    printArray(t, arrSize);

    sortDescending(t, arrSize);

    cout << "Sorted in descending order: ";
    printArray(t, arrSize);

    return 0;
}
