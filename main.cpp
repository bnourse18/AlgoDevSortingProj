#include "timeCounter.h"
#include "insertion.h"
#include "heapsort.h"
#include "bubblesort.h"
#include "selectionsort.h"
#include "quicksort.h"
#include "mergeSort.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>
using namespace std;

void clonearray(int master[], int clone[], int size);

int main(int argc, const char * argv[]) {
    
    int size=10000; //need to change for submission
    int master [size]; //dont touch once loaded
    int clone [size]; //pass this 1 to sort functions
	long long end;
    
    srand(static_cast<unsigned int>(time(nullptr))); //creating rng
    for(int i=0; i<size; i++) master[i]=rand(); //adding values to master array
    
    //heapsort calls, works
    heap H(size);
    clonearray(master,clone,size);
    for(int i=0; i<size; i++) H.S[i]=clone[i];
    timeStart();
    heapsort(size, H); //Run the heapsort 
    end = timeEnd();
    cout << "Heapsort time taken: " << end << " microseconds" << endl;
    cout << "Heapsort had: " << H.cnt << " compares" << endl << endl;
	
	//quicksort calls, works
	int quickcounter = 0;
    clonearray(master,clone,size);
	timeStart();
	quicksort(0, size-1, clone, quickcounter); //Run the quicksort
	end = timeEnd();
	cout << "Quicksort runtime: " << end << " microseconds" << endl;
	cout << "Quicksort performed " << quickcounter << " operations." << endl << endl;

    int mergecounter = 0;
    clonearray(master,clone,size);
	timeStart();
	mergeSort(size, clone, mergecounter); //Run the merge sort
	end = timeEnd();
	cout << "Merge sort runtime: " << end << " microseconds" << endl;
	cout << "Merge sort performed " << mergecounter << " compares." << endl << endl;
    

    //bubblesort
    int bubblecounter = 0;
    clonearray(master,clone,size);
    timeStart(); 
    bubblesort(clone,size,bubblecounter); //Run bubble sort
    end = timeEnd();
    cout << "Bubble runtime: " << end << " microseconds" << endl;
	cout << "Bubble performed " << bubblecounter << " operations." << endl << endl;


    //selectionsort
    int selectioncounter = 0;
    clonearray(master,clone,size);
    timeStart(); 
    selectionsort(size,clone,selectioncounter); // run selection sort 
    end = timeEnd();
    cout << "Selection sort runtime: " << end << " microseconds" << endl;
	cout << "Selection sort performed " << selectioncounter << " operations." << endl << endl;

    //Insertion Sort
    int insertionCounter = 0;
    clonearray(master,clone,size);
    timeStart(); 
    insertionSort(size,clone, insertionCounter); // run insertion sort 
    end = timeEnd();
    cout << "Insertion sort runtime: " << end << " microseconds" << endl;
	cout << "Insertion sort performed " << insertionCounter * 2 << " operations." << endl << endl;


    return 0;
}

void clonearray(int master[], int clone[], int size){ //tested, works
    for(int i=0; i<size; i++) clone[i]=master[i];
}
