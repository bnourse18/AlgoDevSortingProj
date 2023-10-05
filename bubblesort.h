//#ifndef bubblesort_h
// #define bubblesort_h

void bubblesort(int s[], int n, int &counter) {
  int i, j, temp;

  counter = 0;

  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < n - i - 1; j++) {
      counter++; 

      if (s[j] > s[j + 1]) {
        temp = s[j];
        s[j] = s[j + 1];
        s[j + 1] = temp;

       
        counter++;
      }
    }
  }
}

#endif