#ifndef bubblesort_h
#define bubblesort_h

  void bubblesort(int s[], int n);
     {
        int i, j, temp;

        for(i = 1; i < n; i++)
         for(j = 1; j < n-i; j++)
          if(s[j] > s[j+1]
           temp = s[j];
           s[j] = s[j+1]
           s[j+1] = temp;
      }

#endif