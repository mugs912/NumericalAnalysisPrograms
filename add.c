#include <stdio.h>
void add(int,int);

int main(void)
{
	int lop,rop;
	printf("Enter first number\n");
	scanf("%d",&lop);
	printf("Enter second number\n");
	scanf("%d",&rop);
	add(lop,rop);
}

void add(int lop,int rop)
{
	printf("%d + %d = %d\n",lop,rop,lop+rop);
}
