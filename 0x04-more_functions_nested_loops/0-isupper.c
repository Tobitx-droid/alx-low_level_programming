#include "main.h"

/**
* _isupper - The description is below
* Description: Checks if a character constant is uppercase
* @c: Character input
* Return: 1 if True or 0 if False
*/

int _isupper(int c)
{
        char alphabet = 'A';
        int caps;

        caps = 0;
        for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	      {
		            if (c == alphabet)
		            {
			                  caps = 1;
			                  break;
		            }
	      }
	      return (caps);
}
