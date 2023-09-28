#include <iostream>
#include <ctime>
using namespace std;

void clonearray(int master[], int clone[], int size);

int main(int argc, const char * argv[]) {
    
    int size=10;
    int master [size]; //dont touch once loaded
    int clone [size]; //pass this 1 to sort functions
    
    srand(static_cast<unsigned int>(time(nullptr))); //creating rng
    for(int i=0; i<size; i++) master[i]=rand(); //adding values to master array
    
    clonearray(master,clone,size);
    //call sort function
    
    return 0;
}

void clonearray(int master[], int clone[], int size){ //tested, works
    for(int i=0; i<size; i++) clone[i]=master[i];
}
