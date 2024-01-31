#include <stdio.h>
#define LENGTH 12
#define OFFSET 4

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

void copyArray(int* srs,int* dst, int count)
{
    for(int i=0;i<count;i++)
    {
        dst[i]=srs[i];
    }
}

void shift(int* arr, int length, int offset)
{
    int temp[length];
    copyArray(arr+length-offset,temp,offset);
    copyArray(arr,temp+offset,length-offset);
    copyArray(temp,arr,length);
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);

    shift(arr, LENGTH, OFFSET);

    printArray(arr, LENGTH);
    printf("\n");
}

