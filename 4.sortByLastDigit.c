#include <stdio.h>
#define LENGTH 10

void scanArray(int* arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void printArray(int* arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		printf("%d ",arr[i]);
	}
}

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortByLastDigit(int* arr, int length)
{
    for(int i=length-1;i>0;i--)
    {
        for(int k=0;k<i;k++)
        {
            if(arr[k]%10>arr[k+1]%10)
            {
                swap(&arr[k],&arr[k+1]);
            }
        }
    }
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);

    sortByLastDigit(arr, LENGTH);

    printArray(arr, LENGTH);
    printf("\n");
}

