#include <stdio.h>
#include <time.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (Success)
 */
int main(void)
{       
        int ch;
        
        for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	retun (0);
}
