#include <stdio.h>

void main()
{
	int var; // declare variable 
	printf("-> Step 0: \n");
	printf("Address of var: %p\n", &var); 
	printf("Value of var: %d\n", var); // Khi không gán cho biến var bất cứ giá trị gì khi khai báo thì KHÔNG PHẢI giá trị mặc định của nó là 0 mà nó phụ thuộc máy tính và hệ điều hành
	
	printf("\n");
	
	var = 25; 
	printf("-> Step 1: \n");
	printf("Address of var: %p\n", &var); 
	printf("Value of var: %d\n", var);
	
	printf("\n");
	
	int *p; // declare pointer
	printf("-> Step 2: \n");
	printf("Address of pointer p: %p\n", &p); 
	printf("Value of pointer p: %d\n", p); // Khi không gán cho con trỏ p bất cứ địa chỉ gì khi khai báo thì KHÔNG PHẢI giá trị mặc định của nó là 0 mà nó phụ thuộc máy tính và hệ điều hành
	
	printf("\n");
	
	p = &var;
	printf("-> Step 3: \n");
	printf("Address of pointer p point to: %p\n", p);
	printf("Value at address which pointer p point to: %d\n", *p); 
	
	printf("\n");
	
	*p = 10;
	printf("-> Step 4: \n");
	printf("Address of var: %p\n", &var);
	printf("Value of var: %d\n", var); 
	printf("Address of pointer p point to: %p\n", p);
	printf("Value at address which pointer p point to: %d\n", *p); 
}
