#include "main.h"

/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90) && (c != 91) && (c != 92) && (c != 93) && (c != 94) && (c != 95) && (c != 96) && (c != 91));

}
