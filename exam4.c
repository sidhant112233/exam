#include<stdio.h>
main()
{
	int fd,ld,n,sum=0;
	printf("Enter value of n=");
	scanf("%d",&n);
	ld=n%10;
	while(n>=10)
	{ 
	
		n=n/10; 
		
	}
	fd=n;
	sum= fd+ld;
	printf("\nsum of fd+ld=%d",sum);
}
