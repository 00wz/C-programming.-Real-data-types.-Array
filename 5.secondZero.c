#include <stdio.h>
#include <stdbool.h>
#define LENGTH 10

void scanArray(int* arr, int length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
}

void printArrayBeforeZero(int* arr, int length)
{
	for(int i = 0; i < length && arr[i]!=0; i++)
	{
		printf("%d ",arr[i]);
	}
}

bool secondDigitIsZero(int n)
{
    n/=10;
    if(n!=0 && n%10==0)
    {
        return true;
    }
    return false;
}

void copySecondDigitZeroNumbers(int* srs, int* dst, int length)
{
    for (int i = 0, k = 0; i < length; i++)
    {
        if(secondDigitIsZero(srs[i]))
        {
            dst[k]=srs[i];
            k++;
        }
    }
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);

    int newArr[LENGTH]={};
    copySecondDigitZeroNumbers(arr, newArr, LENGTH);

    printArrayBeforeZero(newArr, LENGTH);
    printf("\n");
}

