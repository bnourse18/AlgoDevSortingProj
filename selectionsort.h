#ifndef selectionsort_h
#define selectionsort_h


    void selectionsort(int n, int s[], &counter)
    {
       int temp, i, j, smallest;

       for( i = 1; i <= n - 1; i++)
       {
         smallest = i;
         for ( j = i + 1; j <= n; j++)
            {
              counter++;
            if (s[j] < s[smallest])
              smallest = j;
              temp = s[i];
              s[i] = s[smallest];
              s[smallest] = temp;
          }
        }


#endif