#include <stdio.h>

int EDivisivel(int a, int b)
{
	if(a%b == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	EDivisivel(9,3);
	return (0);
}
