#include <stdio.h>
#include <math.h>
void enterN(int &n);
int evenCounter(int n);
int sumOfOdd(int n);
bool is_n_multiple_of_3_and_5(int n);
void listEvenNum(int n);
bool IsNSquareNumber(int n); // Extra
void nSquareNumberFirst(int n);
bool isNOddNumber(int n); // Extra
int sumOfNOddNumberFirst(int n);
bool isNPerfectNumber(int n); // Extra 
bool is_n_have_perfectnum(int n);
bool is_n_have_only_evennum(int n);
bool is_n_has_increasing_digit(int n);
float Sum_of_fraction(int n);

int main ()
{
    int n;
    
    enterN(n);
    
    printf("So cac so chan tu 1 den %d la %d\n",n,evenCounter(n));
    
    printf("Tong cac so le tu 1 den %d la %d\n",n,sumOfOdd(n));
    
    if (is_n_multiple_of_3_and_5(n) == true)
		printf("%d là boi so cua 3 và 5\n",n);
	else 
		printf("%d khong la boi so cua 3 và 5\n",n);
		
	printf("Cac so chan nho hon hoac bang %d la ", n);
	listEvenNum(n);
	
	printf("\n");

/*	if (IsNSquareNumber(n) == true) 
		printf("%d là s? chính phuong\n", n);
	else 
		printf("%d không là s? chính phuong\n", n); 
*/
	printf("%d so chinh phuong dau tien: ",n);
	nSquareNumberFirst(n);
	
	printf("\n");
	
	printf("Tong %d so le dau tiên là %d\n",n,sumOfNOddNumberFirst(n));
	
	if(is_n_have_perfectnum(n) == true)
		printf("%d co ton tai chu so hoan thien\n",n);
	else
		printf("%d khong ton tai chu so hoan thien\n",n);
		
	if(is_n_have_only_evennum(n) == true)
		printf("%d co toan chu so chan\n",n);
	else 
		printf("%d khong co toan chu so chan\n",n);
		
	if(is_n_has_increasing_digit(n) == true)
		printf("%d co cac chu so tang dan\n",n);
	else 
		printf("%d khong co cac chu so tang dan\n",n);
		
	printf("Tong cac phan so tu 1/2 den 1/(%d + 1) là %.2f\n",n,Sum_of_fraction(n)); 
    return 1;
}

void enterN(int &n)
{
    do
    {
        printf("Enter n:");
        scanf("%d", &n);
        if (n <= 0 || n % 2 != 0)
        {
            printf("Please enter again\n");
        }
    } while (n <= 0 || n % 2 != 0);
}

int evenCounter(int n)
{
    int count = 0;
    for (int i = 2; i <= n; i = i + 2)
    {
        count++;
    }
    return count;
}

int sumOfOdd(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i = i + 2)
	{
		sum = sum + i;
	}
	return sum;
}

bool is_n_multiple_of_3_and_5(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
	{
		return true;
	}
	return false;
}

void listEvenNum(int n)
{
	for(int i = 2; i <= n; i = i + 2)
	{
		printf("%d\t",i);
	}
}

bool IsNSquareNumber(int n) // Extra
{	
	int i = sqrt(n);
	if(n == 0 || n == 1)
		return false;
	if(i * i == n) 
		return true;
	return false;
}

void nSquareNumberFirst(int n)
{
	int counter = 0, i = 0;
	while (counter < n)
	{
		if(IsNSquareNumber(i) == true)
		{
			printf("%d\t",i);
			counter++;	
		}
		i++;
	}
}

bool isNOddNumber(int n) // Extra
{
	if (n % 2 != 0) 
		return true;
	return false;
}

int sumOfNOddNumberFirst(int n)
{
	int sum = 0, counter = 0, i = 0;
	while (counter < n)
	{
		if(isNOddNumber(i) == true)
		{
			sum = sum + i;
			counter++;
		}
		i++;
	}
	return sum;
}

bool isNPerfectNumber(int n) // Extra
{
	int sum = 0;
	for(int i = 1; i < n; i++)
	{
		if(n % i == 0)
			sum = sum + i;
	}
	if (sum == n)
		return true;
	return false;
}

bool is_n_have_perfectnum(int n) // check one by one digit until the condition if is true 
{ 
	int digit;
	while(n>0)
	{ 
		digit = n%10;
		if (isNPerfectNumber(digit) == true)
			{
				return true;
			}
		n = n / 10; 
	}
	return false;
}

bool is_n_have_only_evennum(int n) // if digit is not divisible by 2 then the program will stop immediately
{
	int digit;
	while(n>0)
	{
		digit = n % 10;
		if(digit % 2 != 0)
		{
			return false;
		}
		n = n / 10;
	}
	return true;
}

bool is_n_has_increasing_digit(int n)  
{
	while(n>0) // 123
	{
		int max = n % 10; 
		if (max < (n/10) % 10) 
			return false;
		n = n /10;
	}
	return true;
}

float Sum_of_fraction(int n)
{
	float sum = 0;
	for(int i = 2; i <= n + 1; i++)
	{
		sum = sum + 1.0 / i; // 2 s? nguyên chia nhau thì k?t qu? là s? nguyên ( s? th?c chia s? nguyên k?t qu? là s? th?c )
	}
	return sum;
}