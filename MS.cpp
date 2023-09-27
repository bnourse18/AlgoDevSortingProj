// MS.cpp

#include <vector>

void merge(int h, int m, const keytype U[], const keytype V[], const keytype S[]) 
{
    index i, j, k;
    i=0; j=0; k=0;

    while (i <= h && j <= m) 
    {
        if (U[i] <= V[j]) 
        {
            S[k] = U[i];
            i++;
        } 
        else 
        {
            S[k] = V[j];
            j++;
        }
        k++;
    }
    if(i>h)
    {
        //copy V[j] through V[m] to S[k] through S[h+m];
    }
    else
    {
        //copy U[i] through U[h] to S[k] through S[h+m];
    }
}

void mergeSort(int n, keytype S[]) 
{
    if (n > 1) 
    {
        // Find the middle point of the array
        const int h = n/2; m = n-h;
        keytype U[1..h], V[1..m];
        for(int i =0; i<h; i++)
        {
            U[i] = S[i];
        }
        for (int i = h; i < n; i++) 
        {
            V[i - h] = S[i];
        }
        //copy S[1] through S[h] to U[1] through U[h];
        //copy S[h+1] through S[n] to V[1] through V[m];
        mergeSort(h, U);
        mergeSort(m, V);

        // Merge the sorted halves
        merge(h, m, U, V, S);
    }
}

int main() {
    // You can test the mergeSort function here if needed
    return 0;
}

