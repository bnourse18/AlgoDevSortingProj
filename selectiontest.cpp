#include "selectionsort.h"
#include "timeCounter.h"
#include <iostream>

using namespace std;

int main() {
    int n = 5; // Set the size of the array
    int s[] = {5, 2, 9, 1, 5};

    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;


    int counter = 0;
    int end;

    timeStart();
    selectionsort(n, s, counter);
    end = timeEnd();
    

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    cout << endl << "Took " << end << " microseconds" << endl << "Ran " << counter << " times" << endl;

    return 0;
}