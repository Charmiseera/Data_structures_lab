#include<stdio.h>
int main() {
	int n;
	int i;
	printf("Enter the number of values:");
	scanf("%d",&n);
	int arr[n];
	printf("enter %d values:\n",n);
	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("values in reverse order:\n");
	for( i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}
