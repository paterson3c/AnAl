/**
 *
 * Descripcion: Implementation of sorting functions
 *
 * Fichero: sorting.c
 * Autor: Carlos Aguirre
 * Version: 1.0
 * Fecha: 16-09-2019
 *
 */


#include "sorting.h"

/***************************************************/
/* Function: SelectSort    Date:                   */
/* Your comment                                    */
/***************************************************/
int SelectSort(int* array, int ip, int iu)
{
  /* Your code */
  int i, j, minind, aux, n;

  n = length(array);

  for ( i=0; i<n; i++){
      minind = 0;

    for (j=i; j<n;j++){
      /*llama a min*/
        if (array[i]>array[j]) {
        minind=j;
        }
          
    }
    aux = array[i];
    array[i] = array[minind];
    array[minind] = aux;
  }
}

int SelectSortInv(int* array, int ip, int iu)
{
  /* your code */
}

int min(int* array, int ip, int iu)
{
  /* your code */
}

