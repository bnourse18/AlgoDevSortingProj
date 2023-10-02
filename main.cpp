#include "timeCounter.h"
#include "insertion.h"
#include "heapsort.h"
#include "quicksort.h"
#include <iostream>
#include <ctime>
#include <cmath>
#include <climits>
using namespace std;

void clonearray(int master[], int clone[], int size);

int main(int argc, const char * argv[]) {
    
    int size=10; //need to change for submission
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
    
    return 0;
}

void clonearray(int master[], int clone[], int size){ //tested, works
    for(int i=0; i<size; i++) clone[i]=master[i];
}
