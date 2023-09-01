/**
 * _isalpha - check if alpha char
 * @c: character to be checked
 * Description: check if alpha char
 * Return: 1 if c is alpha char, 0 otherwise
*/

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
