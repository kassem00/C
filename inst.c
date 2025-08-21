#include <stdio.h>
#include <stdlib.h>


int print_array(int *array, int size )
{
	if (array == NULL)
		return -1;
	printf("[ %", size);
	for (int i = 0; i < size; i++)
		printf(" %d ",array[i]);
	printf("]\n");
		       return 0;
}
/**
   int arr[] = { 12, 11, 13, 5, 6 };
   int arr[] = { 11, 11, 13, 5, 6 };
   int arr[] = { 11, 12, 13, 5, 6 };
   int arr[] = { 12, 11, 13, 5, 6 };

 */
int insetion_sort(int *array, int size)
{
	if (array == NULL)
		return -1;

	int key;

	for (int i = 1; i < size; i++)
	{
		printf("sorting %d\n", size);
		print_array(array, size);
		key = array[i];
		int j = i - 1; // why 
			while (j >= 0 && array[j] > key){
				array[j + 1] = array[j];
				j--;
			}
			array[j+1] = key;

		
	}
	printf("sorting \n");

}

int main(){
	int arr[] = { 12, 11, 13, 5, 6 };
	int size = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, size);
	insetion_sort(arr, size);
	print_array(arr, size);
	return 0;
}
