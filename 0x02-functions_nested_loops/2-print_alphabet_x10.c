#include "main.h"
/**
* print_alphabet_x10 - print all alphabet in lowcase 10 time
*/

void print_alphabet_x10(void)
{
char letter;
int i;

for (i = 0; i < 10 ; i++)
{
letter = 'a';
while (letter != '{')
{
_putchar(letter);
letter++;
}
_putchar('\n');
}

}
