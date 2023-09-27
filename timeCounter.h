#include <iostream>
#include <sys/time.h>

struct timeval startTime;

void timeStart() {
    gettimeofday(&startTime, nullptr);
}

long long timeEnd() {
    struct timeval endTime;
    gettimeofday(&endTime, nullptr);
    
    long long start = (startTime.tv_sec * 1000LL) + (startTime.tv_usec / 1000LL);
    long long end = (endTime.tv_sec * 1000LL) + (endTime.tv_usec / 1000LL);
    
    return end - start;
}