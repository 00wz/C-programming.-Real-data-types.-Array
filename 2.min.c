#include <stdio.h>
#define LENGTH 5

void scanArray(int arr[], int length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
}

int min(int arr[], int length)
{
    int min=arr[0];
    for(int i=1;i<length;i++)
    {
        if(arr[i]<min)
        {
            min = arr[i];
        }
    }
    return min;
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);

    printf("%d\n",min(arr, LENGTH));

}

