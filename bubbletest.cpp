#include "bubblesort.h"
#include "timeCounter.h"
#include <iostream> 
using namespace std; 

int main() 
{ 
   int i; 
    int n = 5000;
    // Create an array to store the random elements
    int s[n];

    // Generate 5,000 random integers and store them in the array
    for (int i = 0; i < n; i++) {
        s[i] = rand() % 1000;  // Generating random integers between 0 and 9999
    }
   


    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
    }
    cout << endl;

    int counter = 0;
    int end;
    timeStart();
    bubblesort(s,n, counter);
    end = timeEnd();
   
   
     cout << "Sorted Array: ";
      for (int i = 0; i < n; i++) {
        cout << s[i] << " ";
       }
    
    cout << endl;
 
     

    cout << endl << "Took " << end << " microseconds" << endl << "Ran " << counter << " times" << endl;

}