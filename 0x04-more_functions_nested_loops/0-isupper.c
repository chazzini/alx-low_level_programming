/**
 * _isupper - check if character is uppercase
 * @c: character to check
 * Return: 1 is uppercase and 0 if not uppercase
 */
int _isupper(char c)
{
	int s = (int) c; /*cast the c to int*/

	if (s >= 65 && s <= 90)
		return (1);
	return (0);
}
