#include <stdio.h>
#define LENGTH 5

void scanArray(int arr[], int length)
{
	for(int i = 0; i < length; i++)
	{
		scanf("%d",&arr[i]);
	}
}

float average(int arr[], int length)
{
    float sum=0.f;
    for(int i=0;i<length;i++)
    {
        sum+=arr[i];
    }
    return sum/length;
}

int main(int argc, char **argv)
{
	int arr[LENGTH];
	scanArray(arr, LENGTH);

    printf("%.3f\n",average(arr, LENGTH));

}

