/**
    @file h29.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/

#ifndef H29_H_
#define H29_H_

/**
 * cliqueCount: counts the number of adjacent groups of two or more.
 *
 * @param a an array of const int.
 * @param aSize size of array a.
 *
 * @return the number of cliques in the array.
 *
 */
int cliqueCount(const int a[], size_t aSize);

/**
 * Rearranges the array so that every 7 is followed by an 11.
 *
 * @param[in,out] a an array of int.
 * @param aSize size of array a.
 *
 */
void sevenEleven(int a[], size_t aSize);

#endif
