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
 * @file memory.h
 * @brief Abstraction of memory read and write operations
 *
 * This header file provides an abstraction of reading and
 * writing to memory via function calls. 
 *
 * @author Alex Fosdick
 * @date April 1 2017
 *
 */
#ifndef __MEMORY_H__
#define __MEMORY_H__

/**
 * @brief Sets a value of a data array 
 *
 * Given a pointer to a char data set, this will set a provided
 * index into that data set to the value provided.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 * @param value value to write the the locaiton
 *
 * @return void.
 */
void set_value(char * ptr, unsigned int index, char value);

/**
 * @brief Clear a value of a data array 
 *
 * Given a pointer to a char data set, this will clear a provided
 * index into that data set to the value zero.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return void.
 */
void clear_value(char * ptr, unsigned int index);

/**
 * @brief Returns a value of a data array 
 *
 * Given a pointer to a char data set, this will read the provided
 * index into that data set and return the value.
 *
 * @param ptr Pointer to data array
 * @param index Index into pointer array to set value
 *
 * @return Value to be read.
 */
char get_value(char * ptr, unsigned int index);

/**
 * @brief Sets data array elements to a value
 *
 * Given a pointer to a char data set, this will set a number of elements
 * from a provided data array to the given value. The length is determined
 * by the provided size parameter.
 *
 * @param ptr Pointer to data array
 * @param value value to write the the locaiton
 * @param size Number of elements to set to value
 *
 * @return void.
 */
void set_all(char * ptr, char value, unsigned int size);

/**
 * @brief Clears elements in a data array
 *
 * Given a pointer to a char data set, this will set a clear a number
 * of elements given the size provided. Clear means to set to zero. 
 *
 * @param ptr Pointer to data array
 * @param size Number of elements to set to zero
 *
 * @return void.
 */
uint8_t * my_memmove(uint8_t* src, uint8_t * dst, size_t length);

/**
 * @brief Moves from the source location to the destination
 *
 * Given two byte pointers, one for destination and the other for source,
 * in addition to a length of bytes to move from the source location to the destination. 
 *
 * @param src pointer to the source
 * @param dst pointer to the destination 
 * @param size_t length of bytes to move

 * @return dst.
 */
uint8_t * my_memset(uint8_t* src, size_t length, uint8_t value);

/**
 * @brief Sets all locations of a memory to a given value
 *
 * Given a pointer to a source memory location and a length in bytes,
 * this function sets all locations of the given memory to a given value.
 *
 * @param src pointer to the source
 * @param size_t length of bytes 
 * @param value given value

 * @return src.
 */
uint8_t * my_memzero(uint8_t* src, size_t length;

/**
 * @brief Zeroes out all of the memory
 *
 * Given a pointer to a source memory location and a length in bytes,
 * this function zeroes out all of the memory.
 *
 * @param src pointer to the source
 * @param size_t length of bytes 
 * 
 * @return src.
 */
uint8_t * my_reverse(uint8_t* src, size_t length;

/**
 * @brief Sets all locations of a memory to a given value
 *
 * Given a pointer to a source memory location and a length in bytes,
 * this function sets all locations of the given memory to a given value.
 *
 * @param src pointer to the source
 * @param size_t length of bytes 
 * 
 * @return src.
 */
uint32_t * reserve_words(size_t length);

/**
 * @brief Allocates in dynamic memory the number of words given
 *
 *
 * @param size_t length of bytes 
 *
 * @return ptr to memory if successful, or a Null ptr if not..
 */
void free_words(int32_t *src);

/**
 * @brief Frees a dynamic memory allocation.
 *
 *
 * @param src ptr to the source destination
 */


void clear_all(char * ptr, unsigned int size);

#endif /* __MEMORY_H__ */
