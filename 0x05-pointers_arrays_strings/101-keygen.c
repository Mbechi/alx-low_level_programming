#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 * program 101-crackme.
 * Return: Always 0.
 */

int main(void)
{
	char password[PASSWORD_LENGTH + 1];

	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (int i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = charset[rand() % sizeof(charset)];
	}

	password[PASSWORD_LENGTH] = '\0';

	printf("%s", password);
	return (0);
}
