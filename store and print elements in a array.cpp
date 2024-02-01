#include<stdio.h>
int main(){
	int array[7];
	for(int i=0;i<7;i++){
		printf("enter the element %d: ",i+1);
		scanf("%d",&array[i]);
	}
	printf("elements in the array:");
	for(int i=0;i<7;i++){
		printf("%d",array[i]);
	}
	return 0;
}
