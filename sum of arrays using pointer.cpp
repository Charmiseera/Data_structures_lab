#include<stdio.h>
int main(){
	

int arr[5]={3,5,7,8,9};
int*ptr=arr;
int sum=0;

for(int i=0;i<5;i++){
	sum=sum+*ptr;
	ptr++;
	
}

printf("sum of all elements in array %d  ",sum);
return 0;
}

