#include "mergeSort.h"
#include"timeCounter.h"
#include<iostream>
using namespace std;

int main()
{
    int i; 
    int n = 10;
    int s[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    int counter = 0;
    int end;
    timeStart();
    mergeSort(n,s,counter);
    end = timeEnd();

    for(i = 0; i < n-1; i++)
    {
        cout << s[i] << ", ";
    }
    cout << s[i] << endl;
    cout << endl << "Took " << end << " microseconds" << endl << "compared " << counter << " times" << endl;
}

