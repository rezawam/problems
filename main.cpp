#include <stdio.h>
#include <math.h>

int main()
{
	int n = 0, point = 0, s = 0, ns = 0;
	bool res = 1; // 1 if simple
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		res = 1;
		scanf("%d", &point);			
		for (int i = 2; i <= sqrt(point); ++i)
		{	
			if (point % i == 0) 
			{
				res = 0;
				break;
			}
						
		}
		switch (res)
		{
			case 0:
				ns++;
				break;
			case 1:
				s++;
				break;
		}
	}
	if (s > ns)
		printf("EASY_EASY_REAL_TALK\n");
	else
		printf("OTCHISLEN\n");
	return 0;
}