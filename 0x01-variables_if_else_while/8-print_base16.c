/**
 * main - printing all digits in hexadecimal from 0 to 15 with lowercase letter
 *
 * Return: Always 0 (depict Success)
 */

int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar("%d", num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar("%d", alpha); 
	}
	putchar('\n');
	return (0);
}
