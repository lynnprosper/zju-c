#include <stdio.h>
#include <math.h>

int IsPrime(int n);

int main()
{
	int n, m, t, k, sum;
	k =1;
	t = sum = 0;

	scanf("%d %d", &n, &m);

	if (n > 0 && m <= 200 && n <= m)
	{
		while (1)
		{
			if (k < 3)
			{
				if (IsPrime(k))
				{
					++t;
					if (t >= n && t <= m)
						sum += k;
				}
					
				++k;
				if (t == m)
					break;
			}
			else
			{
				if (IsPrime(k))
				{
					++t;
					if (t >= n && t <= m)
						sum += k;
				}

				k += 2;
				if (t == m)
					break;
			}
		}

		printf("%d\n", sum);
	}

	return 0;
}

int IsPrime(int n)
{
	int k = sqrt(n);
	int i = 2;

	if (n == 1)
		return 0;
	else if (n == 2 || n == 3)
		return 1;
	else
	{
		for (i; i <= k; i++)
		{
			if (n % i == 0)
				return 0;			
		}
		return 1;
	}
}
