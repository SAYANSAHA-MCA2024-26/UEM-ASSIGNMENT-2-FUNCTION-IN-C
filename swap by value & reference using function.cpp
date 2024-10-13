#include <stdio.h> 
int swap_by_value(int a, int b) { 
int temp = a; 
a = b; 
b = temp; 
printf("Inside swap_by_value: a = %d, b = %d\n", a, b);  
}
int swap_by_reference(int *a, int *b) { 
int temp = *a; 
*a = *b; 
*b = temp; 
printf("Inside swap_by_value: a = %d, b = %d, b = %d\n", *a, *b); 
 } 
int main()
{
	int num1, num2; 
	printf("Enter two integers: "); 
	scanf("%d %d", &num1, &num2); 
// Swapping using call-by-value 
	printf("\nBefore swap_by_value: numl = %d, num2 = %d\n", num1, num2); 
	swap_by_value(num1, num2); 
	printf("After swap_by_value: numl = %d, num2 = %d\n", num1, num2); // No change in main 
	// Swapping using call-by-reference 
	printf("\nBefore swap_by_reference: num] = %d, num2 = %d\n", num1, num2); 
	swap_by_reference(&num1, &num2); 
	printf("After swap_by_reference: numl = %d, num2 = %d\n", num1, num2); // Changes reflected 
	return 0; 
}

