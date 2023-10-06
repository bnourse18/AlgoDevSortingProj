void insertionSort (int n, int s[], int &counter)
{
    // initialize variables
    int i = 0, j = 0, x = 0;

    // run the 4 loop i number of times. i will be the insertion point for each loop
    for(i = 1; i < n; i++)
    {
        //x is a temporary variable used for swapping
        x = s[i];
        j = i - 1;
        // while loop runs while j is higher than 0, and while the array at 
        // index position j > than x. This puts the value storred in x at
        // the proper position in the sorted portion of the array
        while(j >= 0 && s[j] > x)
        {
            s[j+1] = s[j];
            j--;
            counter++;
        }
        s[j + 1] = x;
    }
}


