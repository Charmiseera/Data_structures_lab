#include<stdio.h>

int main(){
    int n, i, element, low=0, high, mid,arr[100];

    printf("Enter the number of elements in the array:");
    scanf("%d", &n);

 printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);
    high=n-1;

    printf("\nEnter the element you wish to search for:");
    scanf("%d", &element);

    while (low<=high){
        mid = (low+high)/2;
        if (arr[mid]==element){
            printf("%d is found at index %d.\n" ,element, mid);
            break;
        }

        else if (element<arr[mid]){
            high=mid-1;
        }

        else if (element>arr[mid]){
            low=mid+1;
        }
    }

    if (low>mid){
       printf("%d is not found in the array.\n", element);
    }

    return 0;
}
