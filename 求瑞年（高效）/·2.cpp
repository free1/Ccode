#include <stdio.h>
main()
{
		int y,leap = 0;
        for(y = 2000;  leap != 1; y++)
		{
			if (y%4 == 0 && y%100 != 0 ||  y%400 == 0)
				{
					  printf("%d������\n",y);
					   leap=1;
				}
			else
			{
                   printf("%d��������\n",y);
			}
		}
	
        int p = y;
		while(++y-2500)
		{
			if((y-p)%4 == 0)
				 printf("%d������\n",y);
			else
				 printf("%d��������\n",y);
		}
		return 0;

}
