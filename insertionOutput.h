#include<iostream>
using namespace std;
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

        }
        s[j + 1] = x;
        
    }
}


