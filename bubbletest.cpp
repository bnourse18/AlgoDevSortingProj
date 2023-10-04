#include "bubblesort.h"
#include <iostream> 
using namespace std; 

int main() 
{ 
   int s[] = {64, 25, 12, 22, 11}; 
   int n = 5; 


    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;


    bubblesort(s,n)
   
     cout << "Sorted Array: ";
      for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
       }
    cout << endl;
 
     int counter = 0;
    int end;
    timeStart();
    bubblesort(n, s, counter);
    end = timeEnd();

    cout << endl << "Took " << end << " microseconds" << endl << "Ran " << counter << " times" << endl;

}