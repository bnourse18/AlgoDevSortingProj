void insertionSort (int n, int s[], int &counter)
{
    int i, j, x;
    for(int i = 2; i <= n; i++)
    {
        x = s[i];
        j = i - 1;
        while(j >= 0 && s[j] > x)
        {
            s[j+1] = s[j];
            j--;
            counter++;
        }
        s[j + 1] = x;
    }
}