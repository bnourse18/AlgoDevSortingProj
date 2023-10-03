// mergeSort.h

void merge(int h, int m, const int U[], const int V[], int S[], int &counter) 
{
    int i, j, k;
    i=0; j=0; k=0;

    while (i < h && j < m) 
    {
        //compare
        counter+=2;
        if (U[i] < V[j]) 
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
    
    while (i < h) 
    {
        S[k] = U[i];
        i++;
        k++;
    }

    while (j < m) 
    {
        S[k] = V[j];
        j++;
        k++;
    }
    /*if(i>=h)
    {
        for(int i =0; (i+j)<m && (k+i)<(h+m); i++)
        {
            S[k+i] = V[j+i];
        }
        //copy V[j] through V[m] to S[k] through S[h+m];
    }
    else
    {
        for(int i =0; i<h && (k+i)<(h+m); i++)
        {
            S[k+i] = U[i];
        }
        //copy U[i] through U[h] to S[k] through S[h+m];
    }*/
}

void mergeSort(int n, int S[], int &counter) 
{
    if (n > 1) 
    {
        // Find the middle point of the array
        const int h = n/2; 
        int m = n-h;
        int U[h];
        int V[m];
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
        mergeSort(h, U, counter);
        mergeSort(m, V, counter);

        // Merge the sorted halves
        merge(h, m, U, V, S, counter);
    }
}