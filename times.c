/**
 *
 * Descripcion: Implementation of time measurement functions
 *
 * Fichero: times.c
 * Autor: Carlos Aguirre Maeso
 * Version: 1.0
 * Fecha: 16-09-2019
 *
 */

#include "times.h"
#include "sorting.h"

/***************************************************/
/* Function: average_sorting_time Date:            */
/*                                                 */
/* Your documentation                              */
/***************************************************/
short average_sorting_time(pfunc_sort metodo, int n_perms,int N,  PTIME_AA ptime)
{
/* Your code */
int i, min, max, obs;
int** matrix;
clock_t t=0, t_after=0;
/* n perms representa el n´umero de permutaciones a generar y ordenar
por el m´etodo que se use (en este caso m´etodo de selecci´on), N es el tama˜no de cada permutaci´on y ptime es
un puntero a una estructura de tipo TIME que a la salida de la funci´on contendr´a:*/
max = 0;
min = INT_MAX;
matrix = generate_permutations(n_perms, N);
if(matrix == NULL) return ERR;


}


/***************************************************/
/* Function: generate_sorting_times Date:          */
/*                                                 */
/* Your documentation                              */
/***************************************************/
short generate_sorting_times(pfunc_sort method, char* file, int num_min, int num_max,  int incr, int n_perms)
{
  /* Your code */
}

/***************************************************/
/* Function: save_time_table Date:                 */
/*                                                 */
/* Your documentation                              */
/***************************************************/
short save_time_table(char* file, PTIME_AA ptime, int n_times)
{
  /* your code */
}


