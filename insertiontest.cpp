#include"timeCounter.h"
#include<iostream>
using namespace std;

void insertionSort (int n, int s[], int &counter);

int main()
{
    int i = 0;
    int n = 10;
    int s[n] = {2,11};
    //{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int counter = 0;
    int end;
    timeStart(); 
    insertionSort(n,s, counter); // run insertion sort 
    end = timeEnd();
    cout << "Insertion sort runtime: " << end << " microseconds" << endl;
	cout << "Insertion sort performed " << counter * 4 << " operations." << endl << endl;

    for(i = 0; i < n-1; i++)
    {
        cout << s[i] << ", ";
    }
    cout << s[i] << endl;
}

void insertionSort (int n, int s[], int &counter)
{
    int i = 0, j = 0, k = 0, x = 0;
    for(i = 1; i < n; i++)
    {
        x = s[i];
        j = i - 1;
        while(j >= 0 && s[j] > x)
        {
            s[j+1] = s[j];
            j--;
            counter++;
            cout << "Hello";
        }
        s[j + 1] = x;
        
    }
}


