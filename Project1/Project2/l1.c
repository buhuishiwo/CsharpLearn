#include<stdio.h>
#include<stdlib.h>

int main()
{
	int ch, brac = 0;
	while ((ch = getchar()) != EOF) {
		if (ch == '{')
		{
			brac += 1;
		}
		if (ch == '}')
		{
			if (brac == 0)
			{
				printf("no\n");
			}
			else
			{
				brac -= 1;
			}
		}
		if (brac > 0)
		{
			printf("yes\n");
		}
	}
}