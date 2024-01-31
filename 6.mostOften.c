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

int mostOften(int* arr, int length)
{
    int result;
    int resultCount=0;
    bool flags[LENGTH]={};
    for(int i=0;i<length;i++)
    {
        if(flags[i])
        {
            continue;
        }
        flags[i]=true;
        int currentCount=1;
        for(int k=i+1;k<length;k++)
        {
            if(arr[k]==arr[i])
            {
                currentCount++;
                flags[k]=true;
            }
        }
        if(currentCount>resultCount)
        {
            result=arr[i];
            resultCount=currentCount;
        }
    }
    return result;
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);

    printf("%d\n", mostOften(arr, LENGTH));
}

