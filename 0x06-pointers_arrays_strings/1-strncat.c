#include "main.h"
/**
<<<<<<< HEAD
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */
char *_strcat(char *dest, char *src)
=======
 *  * _strncat - concatenate two strings
 *   * using at most n bytes from src
 *    * @dest: input value
 *     * @src: input value
 *      * @n: input value
 *       *
 *        * Return: dest
 *         */
char *_strncat(char *dest, char *src, int n)
>>>>>>> 8821edf559416fee1fad9b6a38098ff653ac4e4c
{
int i;
int j;
i = 0;
while (dest[i] != '\0')
{
i++;
}
j = 0;
<<<<<<< HEAD
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;									}
=======
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;													j++;													}
>>>>>>> 8821edf559416fee1fad9b6a38098ff653ac4e4c
dest[i] = '\0';
return (dest);
}
