#include<stdio.h>
#include<conio.h>
void BubbleSort(int[],int);
int main()
{
	int arr[]={6,5,3,1,8,7,2,4};
	int i;
	printf("\t\t*********------Bubble Sort------*********\n\n");
	printf("After Sorting Elements Are------\n");
	for(i=0;i<8;i++)
		{
			printf("%d\t",arr[i]);
		}
	BubbleSort(arr,8);
	printf("\nBefore Sorting Elements Are------\n");
	for(i=0;i<8;i++)
		{
			printf("%d\t",arr[i]);
		}
	getch();
	return 0;
}
void BubbleSort(int arr[],int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
