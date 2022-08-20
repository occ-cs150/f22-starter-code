/**
    @file h30.h
    @author Stephen Gilbert
    @version Declarations for CS 150 Homework
*/
#ifndef H30_H_
#define H30_H_

/**
 * Reverses the C-style string pointed to by s.
 *
 * @param s a pointer to the character in a C-style string.
 */
void reverse(char * s);

// DO NOT CHANGE THESE LINES
#define strcmp static_assert(false, "strcmp not allowed");
#define strstr static_assert(false, "strstr not allowed");
#define strlen(s) static_assert(false, "strlen not allowed");
#define strcat(d, s) static_assert(false, "strcat not allowed");
#define strcpy(d, s) static_assert(false, "strcpy not allowed");
#define string static_assert(false, "string not allowed");

#endif
