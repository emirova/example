#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include "func.h"
#define N 10000
int main(void)
{
    int arr1[N];
    int arr2[N];
    int i, count = 0;

    srand(time(0));
    clock_t go1, stop1, go2, stop2;
    
   
    for ( i = 0; i < N; i++) {
         arr1[i] = rand() % 100;

     }
    for (i = 0; i < N; i++)
    {
        arr2[i] = arr1[i];

    }
    

    for (i = 0; i < N; i++)
    {
        if (arr1[i] == arr2[i]) count++;
    }

    if (count == N) printf("Before sorting arrays are equal.\n\n");
    else printf("Before sorting arrays are not equal.\n\n");
    count = 0;
    

    go1 = clock();
    qs_sort(arr1, N, 0, N);
    stop1 = clock();
    double seconds = ((double)(stop1 - go1)) / CLOCKS_PER_SEC;

    printf("The quicksorting is finished. Spent time: %lf\n", seconds);
    
    go2 = clock();
    bubble(arr2, N);
    stop2 = clock();
    seconds = ((double)(stop2 - go2)) / CLOCKS_PER_SEC;
    printf("The bubble sorting is finished. Spent time: %f\n\n", seconds);
    for (i = 0; i < N; i++)
    {
        if (arr1[i] >= arr1[i + 1]) count++;
    }

    if (count==N) printf("Array one is sotred correctly.(Quick Sort)\n");
    else printf("There is an error in the quick sort.\n");
    count = 0;

    for (i = 0; i < N; i++)
    {
        if (arr2[i] >= arr2[i + 1]) count++;
    }
   if (count==N) printf("Array two is sotred correctly.(Bubble sort)\n\n");
   else printf("There is an error in the sort in the second array.\n\n");
   count = 0;
    for (i = 0; i < N; i++)
    {
        if (arr1[i] == arr2[i]) count++;
    }
    if (count==N)
        printf("After sorting arrays are equal.\n");
    else printf("After sorting arrays are not equal.\n");
}
