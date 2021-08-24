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
 * @file <stats.h> 
 * @brief <This file contains the declaration of the functions that we will be using in this projet as well as macros>
 *
 * The functions we will be using for this projet are : 
 *   - print_statistics() : A function that prints the statistics of an array including minimum, maximum, mean and median.
 *   - print_array() : A function that prints the array to the screen.
 *   - find_median() : A function that returns the median value.
 *   - find_mean() : A funciton that returns the mean value.
 *   - find_maximum() : A function that returns the maximum.
 *   - find_minimum() : A function that returns the minimum.
 *   - sort_array() : A function that sorts the array from largest to smallest. 
 *
 * @author <Malek Mahar>
 * @date <19/08/2021>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Declarations and functions */ 

/**
 * @brief This function will print the statistics of an array : min/max , median and mean.
 *
 * This function takes an array and prints its statistics : min/max, median and mean. 
 * 
 *
 * @param ptr   Pointer to an n-element data array
 * 
 * @return Result   Print of the min/max, median and mean of the array
 */
void print_statistics(unsigned char *ptr, unsigned char mediane, unsigned char mean, unsigned char max, unsigned char min);
        



/**
 * @brief This function will print an array.
 *
 * Gives an array of data and length, this functions prints the array to the screen.
 *
 * 
 * @param ptr   Pointer to an n-element data array
 * @param size_t    Pointer to an n-element data array
 * 
 * @return Result   Print of the array on the screen.
 */
void print_array(unsigned char *ptr, unsigned int size_t);




/**
 * @brief This function will return the median value.
 *
 * Gives an array of data and length, this functions returns the median value.
 *
 * 
 * @param ptr   Pointer to an n-element data array
 * @param size_t    Pointer to an n-element data array
 * 
 * @return Result   Median of the array.
 */
unsigned char find_median(unsigned char *ptr, unsigned int size_t, unsigned char Result);


/**
 * @brief This function will return the mean value.
 *
 * Gives an array of data and length, this functions returns the mean value.
 *
 * 
 * @param ptr   Pointer to an n-element data array
 * @param size_t    Pointer to an n-element data array
 * 
 * @return Result   Mean of the array.
 */
unsigned char find_mean(unsigned char *ptr, unsigned int size_t, unsigned char Result);


/**
 * @brief This function will return the maximal value.
 *
 * Gives an array of data and length, this functions returns the maximal value.
 *
 * 
 * @param ptr   Pointer to an n-element data array
 * @param size_t    Pointer to an n-element data array
 * 
 * @return Result   Max of the array.unsigned char find_maximum(unsigned char *ptr, unsigned int size_t, unsigned char Result);
 */
unsigned char find_maximum(unsigned char *ptr, unsigned int size_t, unsigned char Result);



/**
 * @brief This function will return the minimal value.
 *
 * Gives an array of data and length, this functions returns the minimal value.
 *
 * 
 * @param ptr   Pointer to an n-element data array
 * @param size_t    Pointer to an n-element data array
 * 
 * @return Result   Min of the array.
 */
unsigned char find_minimum(unsigned char *ptr, unsigned int size_t, unsigned char Result);



/**
 * @brief This function will a sorted array from largest to smallest.
 *
 * Gives an array of data and length, this functions returns the mean value.
 *
 * 
 * @param ptr   Pointer to an n-element data array
 * @param size_t    Pointer to an n-element data array
 * 
 * @return Result   Sorted of the array.
 */
void sort_array(unsigned char *ptr, unsigned int size_t);


#endif /* __STATS_H__ */
