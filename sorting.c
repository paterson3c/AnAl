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

#include <stdio.h>
#include "sorting.h"


/***************************************************/
/* Function: SelectSort    Date:                   */
/* Your comment                                    */
/***************************************************/
int SelectSort(int *array, int ip, int iu)
{
  /* Your code */
  int i, minind, cont = 0;

  for (i = ip; i < iu + 1; i++)
  {
    minind = min(array, i, iu + 1);
    cont += iu - i + 1;
    swap(&array[i], &array[minind]);
  }
  return cont;
}

int SelectSortInv(int *array, int ip, int iu)
{
  /* your code */
}

int min(int *array, int ip, int iu)
{
  /* your code */
  int i, min, minind;
  min = array[ip];
  minind = ip;
  for (i = ip; i < iu; i++)
  {
    if (min > array[i])
    {
      min = array[i];
      minind = i;
    }
  }
  return minind;
}