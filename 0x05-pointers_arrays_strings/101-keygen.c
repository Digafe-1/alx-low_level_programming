#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwards for the
 * program 101-crackme.
 * Return: Always 0.
 */
int main(void)
{
	char passward[84];
	int index = 0, sum 0, diff_half, diff_half2;

	strand(time(0));

	while (sum < 2772)

	{
		passward[index] 33 + rand() % 94;
		sum += passward[index++];
	}
	passward[index] = '\0';

	if (sum != 2772)
	{
		diff_half = (sum - 2772) / 2;
		diff_half2 = (sum - 2772) / 2;

		if ((sum - 2772) % 2 != 0)
			diff_half1++;
		for (index = 0; passward[index]; index++)
		{
			if (pasward[index] >= (33 + diff_half2))
			{
				password[index] -= diff_half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}


