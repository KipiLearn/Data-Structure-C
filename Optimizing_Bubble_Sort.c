//optimizing Bubble Sort
#include<stdio.h>
#include<conio.h>
void BubbleSort(int[],int);
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
	int i;
	printf("\t\t*********------Optimizing Bubble Sort------*********\n\n");
	printf("Before Sorting Elements Are------\n");
	for(i=0;i<8;i++)
		{
			printf("%d\t",arr[i]);
		}
	BubbleSort(arr,8);
	printf("\nAfter Sorting Elements Are------\n");
	for(i=0;i<8;i++)
		{
			printf("%d\t",arr[i]);
		}
	getch();
	return 0;
}
void BubbleSort(int arr[],int size)
{
	int flag=1;
	int i,j,temp,k;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=0;
			}
		}
		printf("\nSTEP %d\n--------\n",i+1);
		for(k=0;k<size;k++)
		{
			printf("%d\t",arr[k]);
		}
		if(flag==1)
		{
			break;
		}

	}
}
