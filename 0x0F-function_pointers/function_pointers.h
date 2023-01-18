#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

void _putchar(char *c);
void prints_name(char *name, void (*F)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif /*FUNCTION_POINTERS_H*/

