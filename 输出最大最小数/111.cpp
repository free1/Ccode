   #include <stdio.h>

int max, min;

void compare(int array[], int n);

void main()
{
	int i, a[10];

	printf("Please input ten numbers:\n");

	for( i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
	}
	
	compare( a, 10 );
		
	printf("MAX is %d\n Min is %d", max, min);
}

void compare(int array[], int n)
{
	int *p , *array_end;
	
	array_end = array + n;

	max = min = *array;

	for( p = array+1; p < array_end; p++ )
	{
		if( *p > max )
		{
			max = *p;
		}
		else if( *p < min )
		{
			min = *p;
		}
	}

}