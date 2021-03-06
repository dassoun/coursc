/*
 * Cours de Jacques-Olivier Lapeyre
 * Cours 27
 * Programmation modulaire, makefile
 * https://www.youtube.com/watch?v=CoxhXXBGySE
 */
#include <stdio.h>
#include <stdlib.h>

#include "intarray.h"

int main(int argc, char *argv[])
{
	intarray tab1 = intarray_create(2);
	intarray tab2 = intarray_create(3);

	intarray_set(tab1, 0, 5);
	intarray_set(tab1, 1, 6);

	intarray_set(tab2, 0, 1);
	intarray_set(tab2, 1, 2);
	intarray_set(tab2, 2, 3);

	intarray tab3 = intarray_concat(tab1, tab2);	

	intarray_debug(tab1);
	printf("\n");
	intarray_debug(tab2);
	printf("\n");
	intarray_debug(tab3);
	printf("\n");

	printf("min de tab3 = %d", intarray_get_min(tab3));
	printf("\n");

	printf("indice du min de tab3 = %d", intarray_get_index_of_min(tab3));
	printf("\n");

	printf("max de tab3 = %d", intarray_get_max(tab3));
	printf("\n");

	printf("indice du max de tab3 = %d", intarray_get_index_of_max(tab3));
	printf("\n");

	printf("indice du min de tab3 à partir de l'indice 3 = %d", intarray_get_index_of_min_from(tab3, 3));
	printf("\n");

	printf("indice du max de tab3 à partir de l'indice 3 = %d", intarray_get_index_of_max_from(tab3, 3));
	printf("\n");

	printf("Voilà le tableau non trié : ");
	intarray_debug(tab3);
	printf("\n");

	intarray_sort1(tab3);
	printf("Voilà le tableau trié : ");
	intarray_debug(tab3);
	printf("\n");

	intarray_destroy(tab1);
	intarray_destroy(tab2);
	intarray_destroy(tab3);

	return EXIT_SUCCESS;
}