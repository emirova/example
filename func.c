void printarr(int a[], int size)
{
	for (int i = 0; i < size; i++)
		printf("%d ", a[i]);
	printf("\n");
}
void swap(int* p1, int* p2)
{
	long tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
}

#include <stdio.h>
void qs_sort(int Array[], int N, int start, int end)
{
	int head = start, tail = end;

	int middle = (start + end) / 2;

	int x = Array[middle];
	int w;

	do
	{
		while (Array[head] > x)
		{
			head++;
		}

		while (x > Array[tail])
		{
			tail--;
		}

		if (head <= tail)
		{
			w = Array[head];
			Array[head] = Array[tail];
			Array[tail] = w;
			
			head++;
			tail--;
		}
	} while (head < tail);

	if (start < tail)
	{
		qs_sort(Array, N, start, tail);
	}

	if (head < end)
	{
		qs_sort(Array, N, head, end);
	}
}

void bubble(int arr[], int size)
{
	int i, j = 1;
	while (j < size) {
		for (i = size - 1; i >= j; i--)
		{
			if (arr[i] > arr[i - 1]) {
				swap(&arr[i], &arr[i - 1]);
				//printarr(arr, size);
			}
		}

		j++;

	}

}


