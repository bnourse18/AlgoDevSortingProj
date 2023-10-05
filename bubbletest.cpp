#include "bubblesort.h"
#include "timeCounter.h"
#include <iostream> 
using namespace std; 

int main() 
{ 
   int n = 5;
   int s[] = {64, 25, 12, 22, 11}; 
   


    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

     int counter = 0;
    int end;
    timeStart();
    bubblesort(s,n, counter)
    end = timeEnd();
   
   
     cout << "Sorted Array: ";
      for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
       }
    cout << endl;
 
     

    cout << endl << "Took " << end << " microseconds" << endl << "Ran " << counter << " times" << endl;

}