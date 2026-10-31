#include <stdio.h>
int ser(int x) {
	while (x > 0) {
		int t = x % 10;
		if (t == 2 || t == 4) {
			return 1;
		}
		x /= 10;
	}
	return 0;
}
int main()
{
	int i;
	int j;
	int k;
	int y = 0;//最终结果
	for (i = 1;i < 2010;i++)
	{
		for (j = i + 1;j < 2020;j++)
		{
			k = 2019 - i - j;
			if (k > j) {
				if(!ser(i)&&!ser(j)&&!ser(k))
				{
					y = y + 1;
				}
			}
		}

	}
	printf("%d", y);
	return 0;
}