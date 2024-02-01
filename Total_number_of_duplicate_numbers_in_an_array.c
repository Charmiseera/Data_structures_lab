#include<stdio.h>
int main()
{
	int size,i,j,count =0;
	printf("Enter the size of the array:");
	scanf("%d",&size);
	int arr[size];
	printf("enter the elements of an array:\n");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
				break;
		
			}
		}
	}
	printf("total number of duplicate elements in an array are %d\n",count);
	return 0;
}

