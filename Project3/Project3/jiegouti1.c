#include<stdio.h>
#include<math.h>
typedef struct zb {
	int x, y;
}zb;
void print(zb d[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		scanf_s("%d %d", &d[i].x, &d[i].y);
	}
}
void Ydian(zb d[], int n)
{
	int i,t=0,juli;
	int max = 0;
	for (i = 0; i < n; i++)
	{
		juli = sqrt(d[i].x * d[i].x + d[i].y * d[i].y);
		if (juli > max)
		{
			max = juli;
			t = i;
		}
	}
	printf("%d %d %d", d[t].x,d[t].y,max);
}
int main()
{
	int n;
	struct zb a[10] ;
	scanf_s("%d\n", &n);
	print(a, n);
	Ydian(a, n);
}