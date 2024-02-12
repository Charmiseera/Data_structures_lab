#include <stdio.h>
int main()
{
  int arr[100], element, i, n;

  printf("Enter number of elements in array:\n");
  scanf("%d", &n);

  printf("Enter %d elements:\n", n);
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  printf("Enter a number you wish to search for:\n");
  scanf("%d", &element);

  for (i = 0; i < n; i++)
  {
    if (arr[i] == element) 
    {
      printf("%d is found at index %d.\n", element, i);
      break;
    }
  }
  if (i == n)
    printf("%d is not found in the array.\n", element);

  return 0;
}
