#include <conio.h>
#include <stdio.h>
int main()
{
	const int n=10;
	int array[n],i,summ=0;
	printf("Enter array:\n");
	for(i=0;i<n;i++)
		scanf("%i",&array[i]);
		for(i=1;i<n-1;++i)
			summ+=array[i];
	printf("Summ of the elements from first to last(without them):%i\n",summ);
return 0;
}