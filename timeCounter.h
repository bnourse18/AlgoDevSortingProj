#include <iostream>
#include <sys/time.h>
using namespace std;

struct timeval startTime;

void timeStart() {
    gettimeofday(&startTime, nullptr);
}

long long timeEnd() {
    struct timeval endTime;
    gettimeofday(&endTime, nullptr);
    
    long long start = (startTime.tv_sec * 1000000LL) + startTime.tv_usec;
    long long end = (endTime.tv_sec * 1000000) + endTime.tv_usec;
    
    return end - start;
}