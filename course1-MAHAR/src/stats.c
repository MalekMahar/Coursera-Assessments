/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <This file contains the definitions of functions that we will be using and other code needed for this projet>
 *
 *  * The functions we will be using for this projet are : 
 *   - print_statistics() : A function that prints the statistics of an array including minimum, maximum, mean and median.
 *   - print_array() : A function that prints the array to the screen.
 *   - find_median() : A function that returns the median value.
 *   - find_mean() : A funciton that returns the mean value.
 *   - find_maximum() : A function that returns the maximum.
 *   - find_minimum() : A function that returns the minimum.
 *   - sort_array() : A function that sorts the array from largest to smallest. 
 *
 * @author <Malek Mahar>
 * @date <19/08/2021 >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */

  unsigned char Result=0;
  unsigned char mediane = find_median(test , SIZE, Result );
  unsigned char mean = find_mean(test, SIZE, Result);
  unsigned char max = find_maximum(test, SIZE , Result);
  unsigned char min = find_minimum(test, SIZE, Result);

  unsigned char test2[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};


  
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, mediane, mean, max, min);
  print_array(test2, SIZE);
  find_median(test , SIZE, Result );
  find_mean(test, SIZE, Result);
  find_maximum(test, SIZE, Result);
  find_minimum(test, SIZE, Result);
  sort_array(test, SIZE);


}

void print_statistics(unsigned char *ptr, unsigned char mediane, unsigned char mean, unsigned char max, unsigned char min){
    printf("Statistics of the array are :\n");
    printf("median %d \n", mediane);
    printf("mean %d \n", mean);
    printf("max %d \n", max);
    printf("min %d \n", min);
}



void print_array(unsigned char *ptr, unsigned int size_t){
	#ifdef VERBOSE

   	printf("Array : \n");
    	for(int i=0; i<size_t ;i++){

            printf("%d\t", *(ptr + i));
            if(i==9 | i==19 | i==29 | i==39)
                {
                    printf("\n");
                }
        }
	
	#else 
	
	continue;
}



unsigned char find_median(unsigned char *ptr, unsigned int size_t, unsigned char Result){

  int a = *(ptr);
  for (int i=0; i < size_t; i++)
    {
      for(int j = i+1; j < size_t; j++)
      {
        if( *(ptr + j) < *( ptr + i))
        {
          a = *(ptr + i);
          *( ptr + i ) =  *(ptr + j);
          *(ptr + j) = a;
        }
      }
    }

    Result = (*(ptr+40/2));
    return Result;
}



unsigned char find_mean(unsigned char *ptr, unsigned int size_t, unsigned char Result){
  int b = 0;
  for (int i = 0; i < size_t; i++)
    {
      b += *(ptr + i);
    }
  Result = b/40;
  return Result;
}



unsigned char find_maximum(unsigned char *ptr, unsigned int size_t, unsigned char Result){
  
  int a = *(ptr);
  for(int i = 0; i < size_t; i++)
    {
      if(a > *(ptr+i))
      {
        continue;
      }
      else if(a < *(ptr+i))
      {
        a = *(ptr+i);
      }
    }
  Result = a;
  return Result;
}



unsigned char find_minimum(unsigned char *ptr, unsigned int size_t, unsigned char Result){

  int a = *(ptr);
  for(int i = 0; i < size_t; i++)
    {
      if(a < *(ptr+i))
      {
        continue;
      }
      else if(a > *(ptr+i))
      {
        a = *(ptr+i);
      }
    }
  Result = a;
  return Result;
}



void sort_array(unsigned char *ptr, unsigned int size_t){

  int a=0;
  for (int i=0; i < size_t; i++)
    {
      for(int j = i+1; j < size_t; j++)
        {
          if( *(ptr + j) < *( ptr + i))
            {
              a = *(ptr + i);
              *( ptr + i ) =  *(ptr + j);
              *(ptr + j) = a;
            }
        }
    }
  printf("Sorted Array : \n");
  for(int i=0; i<size_t ;i++)
    {
      printf("%d\t", *(ptr + i));
      if(i==9 | i==19 | i==29 | i==39)
        {
          printf("\n");
        }
    }
}
